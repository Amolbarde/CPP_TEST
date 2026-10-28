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
void deleteBegin()
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
    temp->next=NULL;
}
deleteAtPosition(int pos)
{
    Node* temp = head;
    for(int i = 1; i<pos-1;i++)
    {
        temp = temp->next;
    }
    Node* del = temp->next;
    temp->next = del->next;
    delete del;
}
void disp()
{
  Node*  temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}
int main()
{
    cout <<endl<<"Prepand(add beginning)"<<endl;
    prepand(2);
    prepand(3);
    prepand(4);
    prepand(5);
    prepand(6);
    prepand(7);
     disp();
    cout <<endl<<"appand(add last)"<<endl;
    append(1000);
    append(2000);
    append(3000);
     disp();
    cout <<endl<<"After delete first(head)"<<endl;
    deleteBegin();

    cout <<endl<<"After delete Last(temp->next-next)"<<endl;
    deleteEnd();

    cout <<endl<<"After delete At position"<<endl;
    deleteAtPosition(3);
 

    

     disp();
    
}