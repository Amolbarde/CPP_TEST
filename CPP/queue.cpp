#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;


// ENQUEUE
void enque(int val)
{
    Node* newNode = new Node();

    newNode->data = val;
    newNode->next = NULL;

    // First node
    if(rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        // OLD REAR -> NEW NODE
        rear->next = newNode;

        // REAR moves to new node
        rear = newNode;
    }
}


// DEQUEUE
void deque()
{
    if(front == NULL)
    {
        cout << "Queue underflow\n";
        return;
    }

    // Store node which will be deleted
    Node* temp = front;

    // Print deleted value BEFORE changing front
    cout << "Delete: " << temp->data << endl;

    // Move front
    front = front->next;

    // If queue becomes empty
    if(front == NULL)
    {
        rear = NULL;
    }

    delete temp;
}


// PEEK
void peek()
{
    if(front == NULL)
    {
        cout << "Empty\n";
        return;
    }

    cout << "Front element: " << front->data << endl;
}


// DISPLAY
void disp()
{
    if(front == NULL)
    {
        cout << "Empty\n";
        return;
    }

    Node* temp = front;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}


int main()
{
    enque(10);
    enque(20);
    enque(30);

    disp();

    peek();

    deque();

    disp();

    peek();

    return 0;
}
