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

void prepand(int val)
{
 Node* newNode = new Node();
 newNode->data = val;
 newNode->next=NULL;
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
 else
 {
  Node* temp = head;
  while(temp->next!=NULL)
  {
   temp = temp->next;
  }
  temp->next = newNode;
 }
}

void InsertAtPos(int val,int pos)
{
 Node* newNode = new Node;
 newNode->data = val;
 Node* temp = head;
 for(int i=0;i<pos-1;i++)
 {
 temp = temp->next;
 }
 newNode->next = temp->next;
 temp->next = newNode;
}
void disp()
{
 Node* temp = head;
 while(temp!=NULL)
 {
  cout<<temp->data<<" ";
  temp=temp->next;
 }
 
}

void deleteBegning()
{
 Node* temp = head;
 head = head->next;
 delete temp;      
}

void deleteEnd()
{
 Node* temp = head;
 while(temp->next->next!=NULL)
 {
  temp = temp->next;
 }
 delete temp->next;
 temp->next = NULL;
}

void deletAtPos(int pos)           
{
 Node* temp = head;
 for(int i=0;i<pos-1;i++)
 {
  temp = temp->next;
 }
 Node* del= temp->next;
 temp->next = del->next;
 delete del;
}
int main()
{
 insert(31);
 insert(40);
 insert(51);
 insert(81);
 disp(); 
 
 prepand(30);
 disp();
 append(40);
 disp();
  
  InsertAtPos(2,30);
  disp();
  deleteBegning();
  deleteEnd();
  disp();
  deletAtPos(3);     
  disp();   
}
