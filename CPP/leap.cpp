#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
 if(argc < 2)
 {
  cout<<"input missing";
 } 
 int year = atoi(argv[1]);
 if(year % 400 == 0)
 {
  cout << "leap year";
 }
 else if(year % 100 ==0)
 {
  cout << "not leap year";
 }
 else if(year % 4 == 0)
 {
  cout << "leap year";
 }
 else 
 {
  cout << "not leap year";
 }
}
