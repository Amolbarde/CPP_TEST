#include<iostream>
#include<cstdlib>
using namespace std;
int main(int argc, char* argv[])
{
 int year = atoi(argv[1]);
 if(year%400==0)
  cout << "YES";
 else if(year%100==0)
  cout << "NO";
 else if(year%4==0)
  cout << "YES";
 else
  cout << "NO";
}
