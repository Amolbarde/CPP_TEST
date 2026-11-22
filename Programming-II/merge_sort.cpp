//function 1)devide 2)conqure
#include<iostream>
using namespace  std;

void conqure(int arr[],int start,int mid,int end)
{
    int n = end-start+1;
    int merged[n];
    int idx1 = start;
    int idx2 = mid+1;
    int x = 0;
    
    while(idx1<=mid && idx2<=end)
    {
        if(arr[idx1]<=arr[idx2])
        {
            merged[x++] = arr[idx1++];
        }
        else
        {
            merged[x++] = arr[idx2++];
        }
    }
    
    while(idx1<=mid)
    {
        merged[x++] = arr[idx1++];
    }
    while(idx2<=end)
    {
        merged[x++] = arr[idx2++];
    }

    for(int i = 0,j = start;i<n;i++,j++)
    {
        arr[j] = merged[i];
    }
}
void devide(int arr[],int start,int end)
{
    if(start>=end)
    return;

    int mid = (start+end)/2;
    devide(arr,start,mid);
    devide(arr,mid+1,end);
    conqure(arr,start,mid,end);
    
}

int main()
{
    int arr[] = {3,4,5,7,1};
    int n = 5;
    devide(arr,0,n-1);
    cout<<"Array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

/*
amol@amol-HP-ProBook-440-G3:~/Programming-II$ g++ merge_sort.cpp
amol@amol-HP-ProBook-440-G3:~/Programming-II$ ./a.out
Array:
1 3 4 5 7 
*/