#include<iostream>
#include<stack>
using namespace std;
#define MAX 5
class Stack
{
 int top;
 int arr[MAX];
 public:
 
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
  cout <<"Stack overfow";
  return ;
 }
 arr[++top]=x;
}

int pop()
{
 if(is_empty())
 {
  cout<<"Stack underflow";
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

 cout<<s.Top();
}
