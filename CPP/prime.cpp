#include<iostream>
using namespace std;
int main()
{
 int num, i=2;
 cout << "Enter number : ";
 cin >> num;
 if(num<=1)
 {
  cout << num <<" is not a prime number";	
  return 0;
 }
 while(i < num)
 {
  if(num % i == 0)
  break; 
  i++;
 }
 if(i == num)
 cout << "number is prime";
 else
 cout << "not prime number";
 
 return 0;
}
