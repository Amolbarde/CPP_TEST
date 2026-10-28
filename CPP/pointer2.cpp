#include<iostream>
using namespace std;
int main()
{
 int a = 10;
 int* ptr = &a;
 cout << "Value of ptr :" << ptr <<endl;
 cout << " Value of a :" << a << endl;
 cout << " Address of a :" << &a << endl;
 if(ptr==&a)
 {
    cout << "Address of a and value of ptr are same" <<endl;
 }
}
