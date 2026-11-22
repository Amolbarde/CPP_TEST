#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 50;
    cout<<"Before swap a :"<<a<<endl;
    cout<<"Before swap b :"<<b<<endl;
    
     a = a+b;
     b = a-b;
     a = a-b;

    cout<<"Before swap a :"<<a<<endl;
    cout<<"Before swap b :"<<b<<endl;
    
}