#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 50;
    cout<<"Before swap a :"<<a<<endl;
    cout<<"Before swap b :"<<b<<endl;
    
    int temp = a;
    a = b;
    b = temp;

    cout<<"After swap a :"<<a<<endl;
    cout<<"After swap b :"<<b<<endl;
}