#include<iostream>
using namespace std;
int main()
{
    int a[] = {5, 10, 15};
    int *p = a+1;
    cout << *p;
}
//10