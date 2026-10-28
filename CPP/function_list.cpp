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
 Node* newNode = new Node();
 newNode->data = val;
 newNode->next = head;
 head = newNode;
}
void disp()
{
 Node* temp = head;
 while(temp!=NULL)
 {
  cout<<temp->data<<"->";
  temp=temp->next;
 }
}
int main()
{
 int n;
 cout <<"Enter limit : ";
 cin >> n;
 int val;
 cout <<"Enter element : ";
 for(int i=0;i<n;i++)
 {
  cin>> val;
  prepand(val);
 }
  disp();
}
