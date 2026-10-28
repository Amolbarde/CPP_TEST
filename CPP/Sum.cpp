
#include <iostream>
using namespace std;
//find Sum
//using recursion


int Sum(int arr[],int low,int high)
{
    if(low==high)
    {
        return arr[low];
    }
    int mid=(low+high)/2;
    int left = Sum(arr,low,mid);
    int right = Sum(arr,mid+1,high);
    
    return left+right;
}
int main()
{
    int arr[] = {1,2,3,4};
    int n=6;
    int res= Sum(arr,0,3);
    cout<<"SUM:"<<res;
}
