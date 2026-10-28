#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
if(argc<2)
{
 cout << "input missing";
 return 0;
}
 int a = atoi(argv[1]);
 int b = atoi(argv[2]);
 cout <<a+b;
}
