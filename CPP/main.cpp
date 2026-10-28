#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <cctype>
#include <cstdint>
#include <iomanip>
using namespace std;

struct Flags {
    int CF = 0, ZF = 0, SF = 0, OF = 0, PF = 0;
};

bool isRegister(const string& op) 
{
    string regs[] = {"EAX","ECX","EDX","EBX","ESP","EBP","ESI","EDI"};
    for (const string& r : regs) if (op == r) return true;
    return false;
}

bool isConstant(const string& op)
 {
    if (op.empty()) return false;
    size_t i = (op[0] == '-' || op[0] == '+') ? 1 : 0;
    if (i == op.size()) return false;
    for (; i < op.size(); ++i) if (!isdigit((unsigned char)op[i])) return false;
    return true;
}

bool isMemory(const string& op) 
{
    return op.size() >= 2 && op.front() == '[' && op.back() == ']';
}

string trim(string s) 
{
    size_t a = s.find_first_not_of(" \t\r\n");
    if (a == string::npos) return "";
    size_t b = s.find_last_not_of(" \t\r\n");
    return s.substr(a, b-a+1);
}

string upper(string s) 
{
    for (char& c : s) c = (char)toupper((unsigned char)c);
    return s;
}

uint32_t numberValue(string s) 
{
    s = trim(s);
    try 
    {
        long long v = stoll(s, nullptr, 0);
        return (uint32_t)v;
    } catch (...) { return 0; }
}

bool evenParity(uint8_t value) 
{

    int ones = 0;
    for (int i = 0; i < 8; ++i) ones += (value >> i) & 1;
    return (ones % 2) == 0;
}

void updateAddFlags(uint32_t a, uint32_t b, uint32_t result, Flags& f) 
{
    uint64_t wide = (uint64_t)a + (uint64_t)b;
    f.CF = (wide >> 32) & 1;
    f.ZF = (result == 0);
    f.SF = (result >> 31) & 1;
    f.OF = ((~(a ^ b) & (a ^ result) & 0x80000000u) != 0);
    f.PF = evenParity((uint8_t)(result & 0xFF));
}

void updateSubFlags(uint32_t a, uint32_t b, uint32_t result, Flags& f) 
{
    f.CF = (a < b);
    f.ZF = (result == 0);
    f.SF = (result >> 31) & 1;
    f.OF = (((a ^ b) & (a ^ result) & 0x80000000u) != 0);
    f.PF = evenParity((uint8_t)(result & 0xFF));
}

string operandType(const string& op, const vector<string>& symbols) 
{
    if (isRegister(op)) return "Register";
    if (isConstant(op)) return "Constant";
    if (isMemory(op)) return "Memory";
    for (const string& s : symbols) if (op == s) return "Symbol";
    return "Unknown";
}

void showFlags(const Flags& f) {
    cout << "Flags: CF=" << f.CF << " ZF=" << f.ZF
         << " SF=" << f.SF << " OF=" << f.OF
         << " PF=" << f.PF << "\n";
}

int main() 
{
    ifstream opcodeFile("opcode.txt");
    ifstream assemblyFile("assembly.txt");
    if (!opcodeFile || !assemblyFile) {
        cout << "File not found! Keep opcode.txt and assembly.txt beside main.cpp.\n";
        return 1;
    }

    map<string, string> opcodes;
    string mnemonic, machineCode;
    while (opcodeFile >> mnemonic >> machineCode)
     {
        opcodes[upper(mnemonic)] = machineCode;
    }

    vector<string> lines;
    string line;
    while (getline(assemblyFile, line))
     {
        size_t comment = line.find(';');
        if (comment != string::npos) line = line.substr(0, comment);
        line = trim(line);
        if (!line.empty()) lines.push_back(line);
    }

    vector<string> symbols;
    for (string s : lines) {
        size_t colon = s.find(':');
        if (colon != string::npos) 
        {
            string label = trim(s.substr(0, colon));
            if (!label.empty()) symbols.push_back(label);
            s = trim(s.substr(colon + 1));
        }
        string first;
        stringstream ss(s);
        ss >> first;
        string up = upper(first);
        if (!first.empty() && up != "SECTION" && up != "GLOBAL" &&
            up != "BITS" && opcodes.find(up) == opcodes.end())
             {
            size_t pos = s.find_first_of(" \t");
            if (pos != string::npos) {
                string name = trim(s.substr(0, pos));
                if (!name.empty()) symbols.push_back(name);
            }
        }
    }

    cout << "SYMBOL TABLE\n------------\n";
    for (const string& s : symbols) cout << s << "\n";

    map<string, uint32_t> regs;
    map<string, uint32_t> memory;
    Flags flags;

    for (string sourceLine : lines) 
    {
        string name, directive, value;
        stringstream ds(sourceLine);
        ds >> name >> directive >> value;
        string d = upper(directive);
        if (d == "DB" || d == "DW" || d == "DD" || d == "DQ") 
        {
            memory[upper(name)] = numberValue(value);
        }
    }

    cout << "\nOPCODE CHECK AND FLAG SIMULATION\n";
    cout << "Mnemonic\tFound\tOperand\t\tType\n";
    cout << "-----------------------------------------------\n";

    for (string sourceLine : lines) {
        size_t colon = sourceLine.find(':');
        if (colon != string::npos) sourceLine = trim(sourceLine.substr(colon + 1));
        if (sourceLine.empty()) continue;

        string first;
        stringstream ss(sourceLine);
        ss >> first;
        string op = upper(first);
        if (op == "SECTION" || op == "GLOBAL" || op == "BITS") continue;

        size_t pos = sourceLine.find_first_of(" \t");
        if (pos == string::npos) continue;
        string operandsText = trim(sourceLine.substr(pos + 1));


        {
            string directive, value;
            stringstream ds(operandsText);
            ds >> directive >> value;
            string d = upper(directive);
            if (d == "DB" || d == "DW" || d == "DD" || d == "DQ") continue;
        }

        size_t comma = operandsText.find(',');
        string a = comma == string::npos ? trim(operandsText) : trim(operandsText.substr(0, comma));
        string b = comma == string::npos ? "" : trim(operandsText.substr(comma + 1));

        bool found = opcodes.find(op) != opcodes.end();
        cout << op << "\t\t" << (found ? "YES" : "NO");
        if (!a.empty()) cout << "\t" << a << "\t\t" << operandType(a, symbols) << "\n";
        if (!b.empty()) cout << op << "\t\t" << (found ? "YES" : "NO") << "\t" << b << "\t\t" << operandType(b, symbols) << "\n";

        auto getValue = [&](string operand) -> uint32_t {
            operand = trim(operand);
            string u = upper(operand);
            if (isRegister(u)) return regs[u];
            if (isMemory(u)) return memory[trim(u.substr(1, u.size()-2))];
            if (isConstant(operand)) return numberValue(operand);
            if (memory.find(u) != memory.end()) return memory[u];
            return 0;
        };
        auto setValue = [&](string operand, uint32_t value) {
            operand = trim(operand);
            string u = upper(operand);
            if (isRegister(u)) regs[u] = value;
            else if (isMemory(u)) memory[trim(u.substr(1, u.size()-2))] = value;
            else memory[u] = value;
        };

        if (op == "MOV" && comma != string::npos) {
            setValue(a, getValue(b));
        } else if (op == "ADD" && comma != string::npos) {
            uint32_t oldValue = getValue(a), rightValue = getValue(b);
            uint32_t result = oldValue + rightValue;
            setValue(a, result);
            updateAddFlags(oldValue, rightValue, result, flags);
            cout << "  Result = " << result << "\n";
            showFlags(flags);
        } else if (op == "SUB" && comma != string::npos) {
            uint32_t oldValue = getValue(a), rightValue = getValue(b);
            uint32_t result = oldValue - rightValue;
            setValue(a, result);
            updateSubFlags(oldValue, rightValue, result, flags);
            cout << "  Result = " << result << "\n";
            showFlags(flags);
        } else if (!found) {
            cout << "  Warning: opcode not found in opcode.txt\n";
        }
    }

    cout << "\nREGISTER VALUES\n---------------\n";
    for (const string& r : vector<string>{"EAX","EBX","ECX","EDX","ESP","EBP","ESI","EDI"})
        cout << r << " = " << regs[r] << "\n";
    cout << "\nFinal ";
    showFlags(flags);
    return 0;
}
