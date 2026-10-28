#include<iostream>
using namespace std;
class Array_sort
{
public:
void bubble_sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap(arr[j],arr[j+1])
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]  = temp;
            }
        }
    }
}
};
int main()
{
    Array_sort a;
    int arr[] = {40,30,20,10,100};
    int n = 5;
    a.bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
   
}