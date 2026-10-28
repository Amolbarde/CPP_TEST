#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
 Node* head = NULL;
   
void prepand(int val)
{
    Node* newNode = new  Node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;

}
void disp()
{
  Node*  temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
int main()
{
    prepand(2);
    prepand(3);
    prepand(4);
    prepand(5);
    prepand(6);
    prepand(7);
     disp();
    
}