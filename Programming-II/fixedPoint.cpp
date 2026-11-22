#include<iostream>
using namespace std;
int main()
{
  int arr[] = {9,3,4,2,4};
  int n = 5;
  for(int i=0;i<n;i++)
  {
    if(arr[i] == i)
    {
        cout<<i<<endl;
        break;
    }
  }
  cout<<"Not found"<<endl;
}