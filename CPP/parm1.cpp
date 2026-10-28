#include<iostream>
using namespace std;
void swap2(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 2, b = 3;
    cout << "a = " << a << " b = " << b << endl;
    swap2(&a,&b);
     cout << "a = " << a << " b = " << b << endl;
 return 0; 
}