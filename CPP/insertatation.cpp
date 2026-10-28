#include<iostream>
using namespace std;
void insertation_srot(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int curr = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j]>curr)
    {
        arr[j+1]  = arr[j];
        j--;
    }
    arr[j+1] = curr;
    }
}

int main()
{
    int arr[] = {10,40,70,20,30};
    int n =  5;
    insertation_srot(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}