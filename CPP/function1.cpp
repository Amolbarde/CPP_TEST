#include<iostream>
using namespace std;
int add(int x, int y)
{
 return x+y;
}
int main()
{
 int x=4;
 int y=6;
 int result = add(x,y);
 cout << "sum : " << result <<endl;
}
