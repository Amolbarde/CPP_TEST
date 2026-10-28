#include<iostream>
using namespace std;
class Queue
{
    int* arr;
    int front;
    int rear ; 
    int size;

    public:
     Queue(int n)
   {
      arr = new int[n];
      front = -1;
      rear = -1;
      size = n;
   }
    
   bool is_empty()
   {
    return front == -1;
   }

   bool is_full()
   {
    return rear == size-1;
   }

   void push(int val)
   {
    if(is_full())
    {
        cout<<"\nOueue is Full\n";
        return;
    }

    if(front == -1)
    {
        front = 0;
    }
    rear++;
    arr[rear] = val;
    cout<<"\n"<<val<<" inserted\n";
   }

   void pop()
   {
    if(is_empty())
    {
        cout<<"\n Queue is empty\n";
        return;
    }
    cout<<"\nDeleted : "<< arr[front]<<endl;
    front++;

    if(front>rear)
    {
        front = rear = -1;
    }
}
    void disp()
    {
        if(is_empty())
        {
            cout<<"\nQueue is empty\n";
            return;
        }
        cout<<"\n Queue :";

        for(int i=front; i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void peek()
    {
        if(is_empty())
        {
            cout<<"\n Queue is empty\n";
            return;
        }

        cout<<"\n front element: "<<arr[front]<<endl;
    }
};

int main()
{
    int size;
    cout<<"Enter queue size: ";
    cin>>size;

    Queue q(size);

    int ch;
    int val;
    do{
        cout<<"\n\n -----------Queue menu-------------";
        cout<<"\n1. push";
        cout<<"\n2. pop";
        cout<<"\n3. peek";
        cout<<"\n4. Display";
        cout<<"\n5. exit";
       
        cout<<"\n\n Enter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1:cout<<"Enter value to insert : ";
            cin>> val;
             q.push(val);
             break;

             case 2: 
             q.pop();
             break;

             case 3:
             q.peek();
             break;

             case 4:
             q.disp();
             break;

             case 5:
             cout<<"\n program Exit..p(int \n";
             break;

             default:
             cout<<"\nInvalid choice\n";
        }
        
    }while(ch!=5);
    return 0;
}
