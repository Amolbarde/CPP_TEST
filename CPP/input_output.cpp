#include<iostream>
using namespace std;
int main()
{
 const int size = 100;
 char input[size];
 cout << "Who are you : ";
 cin.getline(input,size);
 cout << "you Are : "<< input;
}
