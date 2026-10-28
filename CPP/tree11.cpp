#include<iostream>
using namespace std;
struct Node
{
 int data;
 Node* left;
 Node* right;
};
Node* createNode(int val)
{
Node* newNode = new Node();
newNode->data = val;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}
//Tree Traversal 
// Inorder 2) preorder 3)postorder

void inorder(Node* root)
{
 if(root==NULL)
 {
  return;
 }
 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
} 

void preorder(Node* root)
{
 if(root==NULL)
 {
  return;
 }
 cout<<root->data<<" " ;
 preorder(root->left);
 preorder(root->right);
}

void postorder(Node* root)
{
 if(root == NULL)
 {
  return;
 }
 postorder(root->left);
 postorder(root->right);
 cout<<root->data<<" " ;
 
}
int count(Node* root)
{
 if(root==NULL)
 return 0;
 return 1+count(root->left)+count(root->right);
}
int main()
{
 Node* root;
 root = createNode(30);
 root->left=createNode(30);
 root->right=createNode(40);
 
 inorder(root);
cout<< count(root);
 
}
