#include<iostream>
using namespace std;
void TwoSum(int arr[],int n,int target)
{
 for(int i=0;i<n;i++)
 {
    int x = target-arr[i];
    int start = i+1;
    int end = n-1;

    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid]==x)
        {
            cout<<i<<" "<<mid<<endl;
            return;
        }
        else if(arr[mid]<x)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }

 }
 cout<<"PAir is not found.."<<endl;
}

int main()
{
     int arr[] = {2, 7, 11, 15, 27};
    int n = 5;
    int target = 22;

    TwoSum(arr, n, target);
}