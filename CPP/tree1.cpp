#include<iostream>
using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node *left;
    Node *right;

    Node(T val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
   
    template<class U>
    friend ostream& operator<<(ostream& out, const Node<U>& n);
    
    void preorder()
    {
        cout << " "<< data << " ";
        if(left) left->preorder();
        if(right) right->preorder();
        
    }
};

template<class U>
ostream& operator<<(ostream& out, const Node<U>& n)
{
    out << n.data;
    return out;
}

int main()
{
    Node<char> *a = new Node<char>('a');
    Node<char> *c = new Node<char>('c');
    a->left = c;

    Node<char> *d = new Node<char>('d');
    Node<char> *g = new Node<char>('g');
    Node<char> *h = new Node<char>('h');

    a->right = d;
    d->left = g;
    d->right = h;

   a->preorder();

    return 0;
}