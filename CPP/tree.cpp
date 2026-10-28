#include<iostream>
using namespace std;

class Node
{
    char data;
    Node *left;
    Node *right;

public:
    Node(char val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }

    friend ostream& operator<<(ostream& out, const Node& n)
    {
        out << n.data;
        return out;
    }
};

int main()
{
    Node *n = new Node('a');
    cout << *n << endl;
    return 0;
}