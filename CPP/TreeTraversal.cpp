#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val)
    {
      data = val;
      left = nullptr;
      right = nullptr;
    }
    //Inorder Traversal
};
void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
        inorder(root->left);
        cout << root->data<<" ";
        inorder(root->right);
    

}

void preorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int count(Node* root)
{
    if(root == NULL)
    return 0;
    return 1+count(root->left)+count(root->right);
}
int main()
{
    Node* root = new Node(10);
    Node* A = new Node(20);
    Node* B = new Node(30);
    Node* C = new Node(40);
    Node* D = new Node(50);
    
    root->left = A;
    root->right = B;
    root->left->left = C;
    root->left->right = D;
    cout<<"Inorder Traversal"<<endl;
    inorder(root);
    
    cout<<"Preorder Traversal"<<endl;
    preorder(root);

    cout<<"Postorder Traversal"<<endl;
    postorder(root);
    
    cout << count(root);
}