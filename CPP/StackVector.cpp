#include<iostream>
#include<vector>
using namespace std;
class Stack
{
    public:
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }

    void pop()
    {
        if(v.empty())
        {
            cout<<"stack Underflow"<<endl;
        }
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int  size()
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
            cout<<v[i]<< " ";
        }
        cout<<endl;
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout<<" Stack element :"<<endl;
    s.disp();

    cout<<" Top Element "<<s.top()<<endl;
    s.pop();
    cout<<" After pop :"<<endl;
    s.disp();
    return 0;
}