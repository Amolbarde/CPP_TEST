#include<iostream>
using namespace std;

template<class T>
class LinkedList
{
    private:
     struct Node
     {
        T data;
        Node* next;

        Node(T val)
        {
            data = val;
            next = NULL;
        }
     };
     Node* head;
     
     public:
      LinkedList()
      {
        head = NULL;
      } 
    void append(T val)
    {
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;

        }
        else {
            Node* temp = head;
            while(temp->next!=NULL)
            {
                temp = temp->next;

            }
            temp->next=newNode;
        }
    }
    void print()
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
    LinkedList<int> list;
    list.append(10);
    list.append(10);
    list.append(10);
    list.print();
    return 0;
}