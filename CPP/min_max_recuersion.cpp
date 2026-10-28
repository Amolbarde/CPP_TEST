
#include <iostream>
using namespace std;
//find min max
//using recursion

int findMax(int arr[],int low,int high)
{
    //stop condtion
    if(low==high)
    {
        return arr[low];
    }
    int mid = (low+high)/2;
    int left = findMax(arr,low,mid);
    int right = findMax(arr,mid+1,high);
    if(left>right)
    {
        return left;
    }
    else
    {
        return right;
    }
}
int main()
{
    int arr[] = {7,2,9,4,1,8};
    int n=6;
    int min = arr[0];
    int max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        else
        {
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
    }
        cout<<"MIN:"<<min<<endl;
        cout<<"MAX:"<<max<<endl;
        
        //using recursion->>>
       int ans= findMax(arr,0,5);
        cout<<"MAX using recursion:"<<ans;
}
