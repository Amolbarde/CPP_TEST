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
void append(int val)
{
    Node* newNode = new Node();
    newNode->data = val;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
    }
    else{
        Node* temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
}
void insertAtposition(int val, int pos)
{
    Node* newNode = new Node();
    newNode->data = val;
    Node* temp = head;
    for(int i = 1; i < pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
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

    append(1000);
    append(2000);
    append(3000);
    
    insertAtposition(07,4);
     disp();
    
}
