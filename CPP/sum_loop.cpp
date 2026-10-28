// sum of n number using loop
#include <iostream>
using namespace std;
int SumOfn(int n)
{
    int s = 0;
    for(int i=0;i<=n;i++)
    {
        s = s+i;
    }
   return s;
}
int main()
{
    cout<<"Sum:"<<SumOfn(10);
}
