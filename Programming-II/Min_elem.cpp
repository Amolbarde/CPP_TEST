#include <iostream>
using namespace std;

int min_element(int a[],int low,int high)
{
    if(low == high)
    return a[low];

    int mid = (low+high)/2;
    int left = min_element(a,low,mid);
    int right = min_element(a,mid+1,high);

    if(left<right)
       return left;
    else
       return right;
}
int main()
{
    int arr[] = {5,6,7,5,3,1};
    int n = 6;
    cout<<"Minimum element:"<<min_element(arr,0,n-1);
    return 0;
}