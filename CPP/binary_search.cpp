#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int binary_search(int arr[],int n,int key)
{
    int low = 0;
    int high = n-1;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {9,8,10,6,7,4,5,2,3,1};
    int n = 10;
    bubble_sort(arr,n);
    cout<<"Sorted arry :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter element to search : ";
    int elem;
    cin>>elem;
    int res = binary_search(arr,n,elem);
    if(res==-1)
    {
        cout<<"\nnot found";
    }
    else{
        cout<<"\n found at position : "<<res;
    }
}