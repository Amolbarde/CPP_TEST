#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
 int a = atoi(argv[1]);
 int b = atoi(argv[2]);
 int c = atoi(argv[3]);
 if(a+b > c && a+c > b && b+c > a)
 {
  cout << "is a tringle";
 }
 if(a+b < c && a+c < b && b+c < a)
 {
  cout << "not tringle";
 }
 else
 {
  cout << "other tringle";
 }
}

