#include<iostream>
using namespace std;
template<typename T>
T add(T a, T b)
{
    return a+b;
}
int main()
{
    cout<<add(11,33)<<endl;
    cout<<add(1.1,3.3)<<endl;
    cout<<add('a','b')<<endl;
    
    
}