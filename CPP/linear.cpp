#include<iostream>
using namespace std;
int liner(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
        return -1;
    }
}
int main()
{
    int arr[6]={10,20,30,30,50};
    int n = 5;
    int key;
    cout<<"enter element to serch : ";
    cin>>key;
    int result1 = liner(arr,n,key);
    if(result1!=-1)
    {  
      cout<<"found at pos"<<result1+1;

    }
    else
    {
        cout<<"Not found";
      
    }
}