#include<iostream>
using namespace std;
class Node
{
    public:
    string val;
    Node* left;
    Node* right;

    Node(string v)
    {
        val = v;
        left = right = nullptr;
    }
};
void preorder(Node* root)
{
    if(!root) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
    
}
// bool isleaf()
// {
//     return !left && !
// }

bool isLeaf(Node* node)
{
    return node!= nullptr && node->left == nullptr && node->right == nullptr;
}
// print all leaves
void printLeafe(Node* root)
{
    if(!root) return;
    if(isLeaf(root)) 
    cout  << root->val << " ";
    printLeafe(root->left);
    printLeafe(root->right);

}
int main()
{
    // create node
     Node* p1 = new Node("+");
    Node* p2 = new Node("+");
    Node* p3 = new Node("6");
    
    Node* p4 = new Node("2");
    Node* p5 = new Node("*");
   
    Node* p6 = new Node("3");
    Node* p7 = new Node("9");
    
    
    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p2->right = p5;
    p5->left = p6;
    p5->right = p7 ;
   cout << "Preorder traversal: ";
    preorder(p1);
    cout << endl;

    cout << "Leaf nodes: ";
    // isLeaf(p1);
    printLeafe(p1);
    cout << endl;

    return 0;
}