#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
int main()
{
    int n;
    Node* temp = NULL;
    Node* head = NULL;
    cout<<"Enter Limit : "<<endl;
    cin >> n;
    cout << "Enter Node Element : ";
    for(int i = 0; i<n ; i++)
    {
        Node* newNode = new Node();
        cin>>newNode->data;
        newNode->next=NULL;

        if(head==NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }
    }
    temp = head;
    cout<<"Node Element are :"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}