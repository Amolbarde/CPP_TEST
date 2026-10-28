//diffrence of two number using two pointer with complexity O(n)
#include <iostream>
using namespace std;
void DiffOfTwoNumbeer(int arr[], int n, int target)
{
    int start = 0;
    int end = 1;
    bool found = false;
    while(end<n)
    {
        if(arr[end]-arr[start]==target)
        {
            cout<<"pair:["<<arr[start]<<","<<arr[end]<<"]";
            found = true;
            start++;
            end++;
        }
        else if(arr[end]-arr[start]<target)
        {
            end++;
        }
        else
        {
            start++;
        }
    }
    if(!found)
    {
        cout<<"Pair is not found\n";
        return;
    }
}
int main()
{
    int arr[] = {1,2,4,5,7,9,100};
    int n = 7;
    int target = 2;
    DiffOfTwoNumbeer(arr,n,target);
}
