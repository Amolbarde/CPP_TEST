#include<iostream>
using namespace std;
int main()
{
 int a[] = {18, 92, 35};
 int *p = a;
 cout << *p+1 <<endl; //*p = 18+1 = 19
 cout << "Answer : "<<*(p+1)<<endl; // p = Address // *p = first val // *(p+1) = 92
}