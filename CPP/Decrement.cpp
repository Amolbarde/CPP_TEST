#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40};
    int a = 10;
    int *p = &a;
    cout << "val of ptr before Decrement: "<< p << endl;
    *p--;
    cout << "val of ptr after Decerement: "<< p << endl;
    cout << "val of a: "<< a << endl;
    cout << "Address of a|: "<< &a << endl;
    cout << "Address of ptr: "<< &p << endl;
    
    p = p + 3;
    cout << "Address of ptr after adding 3: "<< p << endl;
    return 0;
}