#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// ---------------- OPCODE TABLE ----------------

map<string, string> opcodeTable =
{
    {"MOV", "01"},
    {"ADD", "02"},
    {"SUB", "03"},
    {"JMP", "04"},
    {"CMP", "05"},
    {"JNZ", "06"}
};

// ---------------- REGISTER TABLE ----------------

set<string> registerTable =
{
    "EAX", "EBX", "ECX", "EDX",
    "ESI", "EDI", "ESP", "EBP"
};

// ---------------- SYMBOL TABLE ----------------

map<string, int> symbolTable;


// ---------------- INSTRUCTION STRUCTURE ----------------

struct Instruction
{
    int address;
    string opcode;
    string operand1;
    string operand2;
};

vector<Instruction> instructionTable;


// ---------------- REMOVE COMMA ----------------

string removeComma(string str)
{
    if (!str.empty() && str.back() == ',')
        str.pop_back();

    return str;
}


// ---------------- CHECK NUMBER ----------------

bool isNumber(string str)
{
    if (str.empty())
        return false;

    for (char c : str)
    {
        if (!isdigit(c))
            return false;
    }

    return true;
}


// ---------------- CHECK REGISTER ----------------

bool isRegister(string str)
{
    return registerTable.find(str) != registerTable.end();
}


// ---------------- CHECK OPCODE ----------------

bool isOpcode(string str)
{
    return opcodeTable.find(str) != opcodeTable.end();
}


// =====================================================
//                    PASS 1
// =====================================================

void pass1()
{
    ifstream file("assembly.txt");

    if (!file)
    {
        cout << "Error: assembly.txt file not found!" << endl;
        return;
    }

    string line;
    int locationCounter = 0;

    while (getline(file, line))
    {
        // Ignore empty line
        if (line.empty())
            continue;

        // Convert line into stream
        stringstream ss(line);

        string firstWord;
        ss >> firstWord;

        // Check Label
        if (!firstWord.empty() && firstWord.back() == ':')
        {
            firstWord.pop_back();

            symbolTable[firstWord] = locationCounter;

            // Check if instruction is also present
            string opcode;
            ss >> opcode;

            if (!opcode.empty())
            {
                locationCounter++;
            }
        }
        else
        {
            // Normal instruction
            locationCounter++;
        }
    }

    file.close();
}


// =====================================================
//                    PASS 2
// =====================================================

void pass2()
{
    ifstream file("assembly.txt");

    if (!file)
    {
        cout << "Error: assembly.txt file not found!" << endl;
        return;
    }

    string line;
    int locationCounter = 0;

    while (getline(file, line))
    {
        if (line.empty())
            continue;

        stringstream ss(line);

        string opcode;
        string operand1;
        string operand2;

        ss >> opcode;

        // If first word is a label
        if (!opcode.empty() && opcode.back() == ':')
        {
            opcode.pop_back();

            // Get actual opcode
            ss >> opcode;

            if (opcode.empty())
                continue;
        }

        // Convert opcode to uppercase
        transform(opcode.begin(), opcode.end(),
                  opcode.begin(), ::toupper);

        // Read operands
        ss >> operand1;
        ss >> operand2;

        operand1 = removeComma(operand1);

        // Check opcode
        if (!isOpcode(opcode))
        {
            cout << "Invalid Opcode: " << opcode << endl;
            continue;
        }

        // Check Operand 1
        if (!operand1.empty())
        {
            if (isRegister(operand1))
            {
                cout << operand1 << " -> Register" << endl;
            }
            else if (isNumber(operand1))
            {
                cout << operand1 << " -> Immediate" << endl;
            }
            else if (symbolTable.find(operand1)
                     != symbolTable.end())
            {
                cout << operand1 << " -> Symbol" << endl;
            }
            else
            {
                cout << operand1 << " -> Unknown Operand" << endl;
            }
        }

        // Check Operand 2
        if (!operand2.empty())
        {
            if (isRegister(operand2))
            {
                cout << operand2 << " -> Register" << endl;
            }
            else if (isNumber(operand2))
            {
                cout << operand2 << " -> Immediate" << endl;
            }
            else if (symbolTable.find(operand2)
                     != symbolTable.end())
            {
                cout << operand2 << " -> Symbol" << endl;
            }
            else
            {
                cout << operand2 << " -> Unknown Operand" << endl;
            }
        }

        // Store instruction
        Instruction inst;

        inst.address = locationCounter;
        inst.opcode = opcode;
        inst.operand1 = operand1;
        inst.operand2 = operand2;

        instructionTable.push_back(inst);

        locationCounter++;
    }

    file.close();
}


// =====================================================
//                DISPLAY SYMBOL TABLE
// =====================================================

void displaySymbolTable()
{
    cout << "\n\n========== SYMBOL TABLE ==========\n";

    cout << "Symbol\t\tAddress\n";
    cout << "-------------------------\n";

    for (auto x : symbolTable)
    {
        cout << x.first << "\t\t"
             << x.second << endl;
    }
}


// =====================================================
//              DISPLAY INSTRUCTION TABLE
// =====================================================

void displayInstructionTable()
{
    cout << "\n\n======= INSTRUCTION TABLE =======\n";

    cout << "Address\tOpcode\tOperand1\tOperand2\n";
    cout << "------------------------------------------\n";

    for (auto inst : instructionTable)
    {
        cout << inst.address << "\t"
             << inst.opcode << "\t"
             << inst.operand1 << "\t\t"
             << inst.operand2 << endl;
    }
}


// =====================================================
//                       MAIN
// =====================================================

int main()
{
    cout << "====================================\n";
    cout << "       TWO PASS ASSEMBLER\n";
    cout << "====================================\n";

    cout << "\nPASS 1 Started...\n";

    pass1();

    cout << "PASS 1 Completed.\n";

    cout << "\nPASS 2 Started...\n";

    pass2();

    cout << "PASS 2 Completed.\n";

    displaySymbolTable();

    displayInstructionTable();

    return 0;
}