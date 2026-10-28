#include<iostream>
using namespace std;
#define MAX 5
class Stack
{
 public:
 int arr[MAX];
 int top;
 
 Stack()
 {
  top = -1;
 }
 
 bool is_full()
 {
  return top == MAX-1;
 }
 
 bool is_empty()
 {
  return top == -1;
 }
 
 void push(int x)
 {
  if(is_full())
  {
   cout<<"Stack is overflow:";
  }
  arr[++top] = x;
 }
 
 int pop()
 {
  if(is_empty())
  {
   cout<<"stack underflow";
   return -1;
  }
  return arr[--top];
 }
 
 int Top()
 {
 return arr[top];
 }
 
 int size()
 {
  return top++;
 }
 void disp()
 {
  if(is_empty())
  {
   cout<<"Stack is underflow";
  }
  for(int i=top;i>=0;i--)
  {
  cout<<arr[i]<<" ";
  }
  cout << endl;
 }
};

int main()
{
 Stack s;
 s.disp();
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);
  s.disp();
  cout<<"top Element are :"<< s.Top()<<endl;
  cout<<"After pop Element are :"<< s.pop()<<endl;
  s.disp();
  cout<<"Size : "<<s.size();
  
}
