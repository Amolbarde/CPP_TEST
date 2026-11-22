//Array: {2, 4, 4, 4, 4, 7, 9} traget = 4
//op = 4 time occure 4

#include<iostream>
using namespace std;
int FirstOccurance(int arr[],int n,int key)
{
    int low = 0,high = n-1;
    int ans = -1;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==key)
        {
            ans = mid;
            high = mid-1;
        }
        else if(arr[mid]<key)
        {
            low = mid+1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}


int lastOccurences(int arr[],int n , int key)
{
    int low = 0,high = n-1;
    int ans  = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == key)
        {
            ans = mid;
            low = mid+1;
        }
        else if(arr[mid]<key)
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {2,4,4,4,4,7,9};
    int n = 7;
    int key = 4;
    int first = FirstOccurance(arr,n,key);
    int last = lastOccurences(arr,n,key);
    if(first == -1)
      cout<<"Element Not Found";
    else
      cout<<"Count = "<<last-first+1;

      return 0;
}