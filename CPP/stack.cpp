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
        cout<<"Stack is underflowe"<<endl;
    }
    v.pop_back();
  }

  int top()
  {
    return v.back();
  }

  int size()
  {
    return v.size();
  }

  bool is_empty()
  {
    return v.empty();   
  }
  void disp()
  {
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }
    cout <<endl;
  }b
};
int main()
{
    Stack s;
    s.push(20);
    s.push(30);
    s.push(50);
    s.push(50);

    
}