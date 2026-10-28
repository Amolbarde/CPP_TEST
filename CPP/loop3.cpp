#include<iostream>
using namespace std;
int main()
{
 int num;
 cout << "Numbers? ";
 cin >> num;
 if(num <= 0)
 {
  cout << "Incorrect Input, Require Positive Integer" << endl;
  return 1;
 }
 int prod = 1;
 for(int i=2;i<=num;i++)
 {
  prod*=i;
 }
 cout << num << "!= " << prod << endl;
}
