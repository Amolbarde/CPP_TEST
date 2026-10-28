#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter num:";
    cin >> n;
    if(n<=1)
    {
        cout << "Not Prime"<<endl;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout <<"Not Prime"<<endl;
            return 0;
        }
    }
    cout <<"Prime"<<endl;
}