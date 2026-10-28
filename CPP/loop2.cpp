#include<iostream>
using namespace std;
int main()
{
 int num;
 int sum = 0;
 cout << "give number to add (to quit press CTRL-d)" << endl;
 
 while(cin >> num)
 {
  sum = sum+num;
 }
 cout << "Sum of numbers is "<< sum << endl;
 return 0;
}

