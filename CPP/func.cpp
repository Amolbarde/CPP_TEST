#include<iostream>
using namespace std;
int addRange(int x,int y)
{
    int sum =0;
    for(int i=x;i<=y;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int a,b;
    cout <<"Give 2 numbers : ";
    cin >>a>>b;
    int c=addRange(a,b);
    cout << "sum : "<< c<<endl;
}