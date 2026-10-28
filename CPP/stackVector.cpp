#include<iostream>
#include<vector>
using namespace std;
class Stack
{
 vector<int> v;
 public:
  void push(int x)
  {
   v.push_back(x);
  }

void pop()
{
 if(v.empty())
{
 cout<<"Stack is Underflow";
}  
v.pop_back();
}

int Top()
{
 return v.back();
}

int size()
{
 return v.size();
}
int is_empty()
{
 return v.empty();
}

void disp()
{
 for(int i=0;i<v.size()-1;i++)
 {
  cout<<v[i]<<" ";
 }
 cout <<endl;
}
};

int main()
{
Stack s;
s.push(10);
s.push(10);
s.push(10);
s.push(10);
s.disp();
s.pop();
s.disp();
}
