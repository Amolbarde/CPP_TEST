#include<iostream>
using namespace std;
template<class T>
class Node
{
public:
 T data;
 Node<int>* next;
};
int main()
{
 Node<int>* head =  NULL;
 Node<int>* temp = NULL;
 int n;
 cout<<"Enter Limit : ";
 cin>>n;
 cout << "Enter Node : ";
 for(int i=0; i<n; i++)
 {
  Node<int>* newNode = new Node<int>();
  cin>>newNode->data;
  newNode->next = NULL;
  if(head==NULL)
  {
  head = newNode;
  temp = newNode;
  }
  else
  {
   temp->next = newNode;
   temp = newNode;
  }
 }
temp = head;
cout<<"Node Element Are : "<<endl;
while(temp!=NULL)
{
 cout<<temp->data<<"->";
 temp=temp->next;
}
 cout<<"NULL";
}
