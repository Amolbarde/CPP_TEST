#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter num : ";
    cin >> n;
    while(n>0)
    {
        cout << n%10;
        n = n/10;
    }
}