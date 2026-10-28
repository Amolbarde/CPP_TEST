#include<iostream>
using namespace std;
struct Node
{
 int data;
 Node* next;
};
int main()
{
 Node* head = new Node();
 Node* sec = new Node();
 Node * thir = new Node();
 head->data = 10;
 head-> next =sec;
 sec->data = 20;
 sec->next = thir;
 thir->data = 30;
 thir->next = NULL;
 
 Node* temp = head;
  while(temp!=NULL)
  {
   cout<<temp->data<<"->";
   temp=temp->next;
  }
 }
