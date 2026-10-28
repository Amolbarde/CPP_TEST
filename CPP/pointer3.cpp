#include<iostream>
using namespace std;
int main()
{
 int a = 10;
 int* ptr = &a;
 int** pptr = &ptr;
 cout <<"val of a :"<< a << endl;
 cout << "Address of a :" << &a <<endl;
 cout << "Address of ptr :" << ptr <<endl;
 cout << "Address of pptr :" << pptr <<endl;
 cout << *(pptr);
}