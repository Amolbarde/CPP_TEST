#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
 int a = atoi(argv[1]);
 int b = atoi(argv[2]);
 int c = atoi(argv[3]);
 
 if((a>=b && a<=c) || (a>=c && a <=b))
 cout << a;
 else if((b>= a && b <= c) || (b >= c && b <= a))
 cout << b;
 else
 cout << c;
}
