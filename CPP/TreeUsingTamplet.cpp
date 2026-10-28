#include<iostream>
using namespace std;
template<class T>
class Node
{
    public:
    T data;
    Node<T>* left;
    Node<T>* right;

    Node(T val)
    {
        data = val;
        left = nullptr;
        right = nullptr;  
    }
};
int main()
{
   
    Node<char>* A = new Node<char>('A');
    Node<char>* B = new Node<char>('B');
    Node<char>* C = new Node<char>('C');
   A->left = B;
   A->right = C;
    Node<int>* x = new Node<int>(10);
    Node<int>* y = new Node<int>(20);
    Node<int>* z = new Node<int>(30);
       x->left= y;
       y->right = z;


    Node<float>* p = new Node<float>(2.8);
    Node<float>* q = new Node<float>(2.9);
    p->left = q;
    cout<<"Tree"<<endl;
 
  cout << A->data;

}