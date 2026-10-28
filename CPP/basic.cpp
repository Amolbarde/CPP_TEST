#include<iostream>
using namespace std;
struct Node
{
 int data;
 Node *next;
};
void insertBeg(Node* &head, int d)
{
    Node* temp = new Node();
    temp->data=d;
    temp->next=head;
    head = temp;
}
int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
     
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<< " "<<endl<<endl;
        temp = temp->next;
    }
    insertBeg(head,20);
    temp=head;
     while(temp!=NULL)
    {
        cout<<temp->data<< " "<<endl;
        temp = temp->next;
    }
}