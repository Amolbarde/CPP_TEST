#include <iostream>
#include <random>
#include <bits/stdc++.h>

using namespace std;

int method1(string str) {
   int val = 0;
   for(const auto &c: str) {
       val += c;   // c - 'a' + 1
   }
   return val;
}

int method2(string str) {
   int val = 0;
   int i = 0;
   for (const auto &c: str) {
       val += (c * (i+1));
       i++;
   }
   return val;
}

string generate_random_string(size_t length) {
    static const string chars =
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    static mt19937 generator(894);
    static uniform_int_distribution<> dist(0, chars.size() - 1);
  string result;
    for (size_t i = 0; i < length; ++i)
        result += chars[dist(generator)];

    return result;
}

class HashTableChaining {
    private:

    class Cell{
        public:
            string data;
            bool is_empty;
            bool is_deleted;

        Cell() {data = ''; is_empty = true; is_deleted = false;}
 friend ostream& operator<<(ostream& out, const HashTableChaining& h) {
        for(int i = 0; i < h.size; i++) {
            out << i << ":" << table[i] << endl;
            for(const auto &s: h.table[i]) {
                out << " " << s;
            }
            out << endl;
        }
        return out;
    }
};

int main() {
    cout << "Singly linked list based implementation." << endl;

    HashTableChaining ht(50);
    ht.insert("ravi");
    ht.insert("avir");

    for (int i = 0; i < 50; i++) {
        string s = generate_random_string(10);
        ht.insert(s);
    }

    cout << ht << endl;

    string s = "UPlqDBL3ez";

    if (ht.search(s)) {
  cout << s << " is present in the table's list " << ht.hash(s) << endl;
        ht.remove(s);
        cout << ht << endl;
    }
    else {
        cout << s << " is not present in the table" << endl;
    }

    if



    return 0;
}

