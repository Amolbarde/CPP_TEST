#include<iostream>
using namespace std;
int binarySearch(int a[],int low,int high,int key)
{
    if(low>high)
    return -1;

    int mid = (low+high)/2;
    if(a[mid]==key)
    {
        return mid;
    }
    
    if(key<mid)
    {
        return binarySearch(a,low,mid-1,key);
    }
    else{
        return binarySearch(a,mid+1,high,key);
    }
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int n = 5;
    int key = 50;
    
    int result = binarySearch(arr,0,n-1,key);
    cout<<"Index:"<<result<<endl;
    return 0;
}