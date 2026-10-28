#include<iostream>
using namespace std;
class Node
{
    public:
    char data;
    Node* left;
    Node* right;
    
    Node(char val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int main()
{
    Node* A = new Node ('A');
    Node* B = new Node ('B');
    Node* C = new Node ('C');
    Node* D = new Node ('D');

    A->left = B;
    A->right = C;
    B->left = D;

    cout<<A->data  ;
    cout << A->left->data<<endl;
    cout << A->right->data<<endl;
    cout << B->left->data<<endl;
    
    
    
}