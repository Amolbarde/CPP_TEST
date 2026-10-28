#include<iostream>
using namespace std;
struct Node
{
 int data;
 Node* next;
};
Node* head = NULL;
void insert(int val)
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
void Print()
{
    Node* temp = head;
    while(temp!=NULL)
    {
       cout << temp->data <<endl;
        temp = temp->next;
}
}
int main()
{
    insert(19);
    insert(20);
    insert(19);
    insert(20);
    insert(19);
    insert(20);
    
    Print();
}
