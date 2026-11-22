#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,4,4,5,5,7};
    int n = 6;
    int j = 0;
    for(int i = 1;i<n;i++)
    {
        if(arr[i]!=arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }
 for(int i=0;i<j;i++)
 {
    cout<<arr[i]<<" ";
}
cout<<endl;
}