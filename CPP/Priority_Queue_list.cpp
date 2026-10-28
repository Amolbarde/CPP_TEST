#include<iostream>
using namespace std;
class Node
{
    public:
  int data;
  Node* next;
  int priority;

  Node(int x)
  {
    data = x;
    next = NULL;
  }
};

class Queue
{
    public:
    Node* head = NULL;
    void enqueue(int x,int p)
    {
        Node* newNode = new Node(x);
        newNode->next  = NULL;
        newNode->priority = p;
        if(head == NULL)
        {
            head = newNode;
        }
       else if(head->priority<newNode->priority)
       {
        newNode->next = head;
        head = newNode;
       }
       else
       {
        Node* temp = head;
        while(temp->next!=NULL && temp->next->priority>=newNode->priority)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
       }
    }
    
    void dequeue()
    {
        if(head == NULL)
        {
            cout<<"Not dequeue perform!! . Queue is underflow.."<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void search()
    {
        Node* temp = head;
        int key;
        cout<<"Enter element to search:";
        cin>>key;
        while(temp!=NULL)
        {
            if(temp->data == key)
            {
                cout<<"Element found "<<endl;
                return;
            }
            else{
                cout<<"Element not found "<<endl;
                return;
            }
        }
    }
    void size()
    {
        Node* temp = head;
        if(head == NULL)
        {
            cout<<"Queue is underflow..";
            return;
        }
        int count = 0;
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        cout<<"Size of queue is :"<<count<<endl;
    }
    void disp()
    {
        Node* temp = head;
        {
            cout<<"Nothing to display!!.. Queue is underflow.."<<endl;
            return;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<"->(P"<<temp->priority<<") ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{
 Queue q;
 q.enqueue(10,3);
 q.enqueue(2,4);
 q.enqueue(1,10);
 q.disp();
 q.size();
q.search();
 q.dequeue();
 q.disp();
 q.size();
 
 q.dequeue();
 q.disp();
 q.size();
 q.dequeue();
 q.disp();
 q.dequeue();
 q.disp();
 
}
