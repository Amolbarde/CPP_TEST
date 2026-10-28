#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    cout << "Additon : "<< a+b << endl;
    cout << "substraction : "<< a-b << endl;
    cout << "division : "<< a/b << endl;
    cout << "multiplication : "<< a*b << endl;
    if(a<b)
    {
        cout << "b is greater";
    }
    else if(a>b)
    {
        cout << "b is greater";
    }
    else 
    {
        cout << "same number"<<endl;
    }
    cout << "multiplication table of "<<a<<endl;
    for(int i = 1;i <= 10 ; i++)
    {
        
        cout << a<<"*"<<i <<" :" <<a*i<<endl;
    }
}