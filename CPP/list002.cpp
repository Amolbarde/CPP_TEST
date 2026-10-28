#include<iostream>
using namespace std;
struct node
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
 else
 {
  Node* temp = head;
  while(temp->next!=NULL)
  {
   temp = temp->next;
  }
  temp->next  = newNode;
 }
}
void disp()
{
 Node* temp = head;
 while(temp!=NULL)
 {
  cout<<temp->data<<" ";
 }
 
}

int main()
{
 insert(31);
 insert(40);
 insert(51);
 insert(81);
 void disp(); 
}
