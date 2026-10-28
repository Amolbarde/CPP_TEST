#include<iostream>
using namespace std;
int main()
{
    int a = 10; 
    int &r = a;
    r++;
    cout << a;
}
// REFERENCING ..
// output 11 
// because a and r is store in same  location 
// r change a change 
// a change r change 
//