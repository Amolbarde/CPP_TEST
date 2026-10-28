#include <iostream>
#include <random>
using namespace std;

// ---------- Hash Functions ----------
int method1(string str) {
    int val = 0;
    for (auto c : str) {
        val += c;
    }
    return val;
}

// ---------- Random String Generator ----------
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

// ---------- Node for Linked List ----------
class Node {
public:
    string data;
    Node* next;

    Node(string val) {
        data = val;
        next = NULL;
    }
};

// ---------- Hash Table (Chaining) ----------
class HashTableChaining {
private:
    int size;
    Node** table;

public:
    // Constructor
    HashTableChaining(int s) {
        size = s;
        table = new Node*[size];

        for (int i = 0; i < size; i++) {
            table[i] = NULL;
        }
    }

    // Hash Function
    int hash(string key) {
        return method1(key) % size;
    }

    // Insert
    void insert(string key) {
        int index = hash(key);

        Node* newNode = new Node(key);

        if (table[index] == NULL) {
            table[index] = newNode;
        } else {
            Node* temp = table[index];
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Search
    bool search(string key) {
        int index = hash(key);
        Node* temp = table[index];

        while (temp != NULL) {
            if (temp->data == key)
                return true;
            temp = temp->next;
        }
        return false;
    }

    // Delete
    void remove(string key) {
        int index = hash(key);
        Node* temp = table[index];
        Node* prev = NULL;

        while (temp != NULL) {
            if (temp->data == key) {
                if (prev == NULL) {
                    table[index] = temp->next;
                } else {
                    prev->next = temp->next;
                }
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }

    // Display
    void display() {
        for (int i = 0; i < size; i++) {
            cout << i << ": ";
            Node* temp = table[i];

            while (temp != NULL) {
                cout << temp->data << " -> ";
                temp = temp->next;
            }
            cout << "NULL\n";
        }
    }

    // Destructor (memory free)
    ~HashTableChaining() {
        for (int i = 0; i < size; i++) {
            Node* temp = table[i];
            while (temp != NULL) {
                Node* next = temp->next;
                delete temp;
                temp = next;
            }
        }
        delete[] table;
    }
};

// ---------- Main Function ----------
int main() {
    cout << "Hash Table using Chaining (Linked List)\n";

    HashTableChaining ht(50);

    // Insert fixed values
    ht.insert("ravi");
    ht.insert("avir");  // collision example

    // Insert random values
    for (int i = 0; i < 50; i++) {
        string s = generate_random_string(10);
        ht.insert(s);
    }

    // Display table
    ht.display();

    // Search & Delete
    string s = "UPlqDBL3ez";

    if (ht.search(s)) {
        cout << "\n" << s << " found at index " << ht.hash(s) << endl;
        ht.remove(s);

        cout << "\nAfter deletion:\n";
        ht.display();
    } else {
        cout << "\n" << s << " not found in table\n";
    }

    return 0;
}


//Linear probinf