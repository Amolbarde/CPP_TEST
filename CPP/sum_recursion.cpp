// sum of n number using recursion
#include <iostream>
using namespace std;
int SumOfn(int n)
{
    
    if(n==1)
    {
        return 1;
    }
   return n+SumOfn(n-1);
}
int main()
{
    cout<<"Sum:"<<SumOfn(10);
}
