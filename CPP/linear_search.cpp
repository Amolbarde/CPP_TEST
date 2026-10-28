#include <iostream>
#include <vector>
using namespace std;

void linerarSeach(vector<int>& arr,int n)
{
    int key;
    cout<<"Enter element to search:";
    cin>>key;
    for(int i=0;i<n;i++)
    {
      if(arr[i]==key)  
      {
        cout<<"Found at pos:"<<i;
        return;
      }
      
    }
    cout<<"Not found";
 
}

int main()
{
    vector<int> arr = {1,2,3,4,5,3};
    int n = size(arr);
    linerarSeach(arr,n);
}