
#include <iostream>
using namespace std;
class PriorityQueue
{
  int arr[10];
  int priority[10];
  int front;
  int rear;
  
  public:
   PriorityQueue()
    {
     front = rear = -1;
    }

 bool isEmpty()
 {
     return front == -1;
 }
 
 bool isFull()
 {
     return rear == 9;
 }
 
 void enqueue(int x, int pri)
 {
     if(isFull())
     {
         cout<<"Queue is full"<<endl;
         return;
     }
     else if(isEmpty())
     {
         front = 0;
         rear = 0;
     }
     else
     {
         rear++;
     }
     arr[rear] = x;
     priority[rear] = pri;
     cout<<x <<" inserted with priority "<<pri<<endl;
     
 }
 
 void dequeue()
 {
     if(isEmpty())
     {
         cout<<"Queue is empty "<<endl;
         return;
     }
     int highest = front;
     for(int i = front+1;i<=rear;i++)
     {
         if(priority[i]>priority[highest])
         {
             highest = i;
         }
     }
     cout<<arr[highest]<<" removed "<<endl;
     for(int i=highest;i<rear;i++)
     {
         arr[i] = arr[i+1];
         priority[i] = priority[i+1];
     }
     rear--;
     if(rear<front)
     {
         rear = front = -1;
     }
 }
 
 void disp()
 {
     if(isEmpty())
     {
         cout<<"empty"<<endl;
         return;
     }
     cout<<"Queue is :";
     for(int i=front;i<=rear;i++)
     {        
         cout<<arr[i]<<" (P "<<priority[i]<<") "<<endl;
     }
     cout<<endl;
 }
};
int main()
{
    PriorityQueue q;
    q.enqueue(10,3);
    q.enqueue(20,6);
    q.enqueue(30,7);
    q.enqueue(40,8);
    q.enqueue(50,1);
    q.enqueue(60,10);
    q.disp();
    q.dequeue();
    q.dequeue();
    return 0;
}
