#include<iostream>
using namespace std;
class Node
{
 public:
 int data;
 Node* next;
};
Node *head = NULL;
void prepand(int val)
{
 Node* newNode = new Node();
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
void pos(int val,int pos)
{
    Node* newNode = new Node();
    newNode->data = val;
    Node* temp = head;
    for(int i=0;i<pos-1;i++)
    {
        temp = temp->next;
    }
    newNode->next=temp->next;
    temp->next = newNode;
}

void deleteB()
{
    Node* temp = head;
    head = head->next;
    delete temp;
}
void deleteE()
{
    Node* temp = head;
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp = temp->next;

}

void delP(int pos)
{
    Node* temp = head;
    for(int i=0;i<pos-1;i++)
    {
        temp = temp->next;
    }
    Node* del=temp->next;
    temp->next = del->next;
    delete del;
}
int lenght()
{
    Node* temp = head;
    int cnt = 0;
    while(temp!=NULL)
    {
        cnt++;
        temp = temp->next
    }
    return temp;
}
    void disp()
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<< " ";
            temp = temp->next;
        }
    };

int main()
{
    prepand(10);
    prepand(30);
    disp();
}