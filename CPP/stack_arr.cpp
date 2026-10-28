#include<iostream>
using namespace std;
#define MAX 5
class Stack
{
 int arr[MAX];
 int top;
 
 public:
 Stack()
 {
  top = -1;
 }
 
 bool is_full()
 {
  return top==MAX-1;
 }
 
 bool is_empty()
 {
  return top == -1;
 }
 
 void push( int x)
 {
  if(is_full())
  {
   cout<<"Stack is overflow";
   return ;
  }
   arr[++top] = x;
 }
 
 int pop()
 {
  if(is_empty())
  {
   cout<<"Stack is underflow";
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
  return top+1;
 }
};

int main()
{
 Stack s;
 s.push(10);
 s.push(20);
 s.push(30);
 
 cout<<"TOP of stack : "<< s.Top()<<endl;
 cout<<"pop : "<<s.pop()<<endl;
 cout<<"size : "<<s.size();
  cout<<"TOP of stack : "<< s.Top()<<endl;
 return 0;
}
