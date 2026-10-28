// Two Sum using Two Pointer Approach
#include <iostream>
using namespace std;
void TwoSum(int arr[], int n, int target)
{
    int start = 0;
    int end = n-1;
    bool found = false;
    while(start<end)
    {
        if(arr[start]+arr[end] == target)
        {
            cout<<"pair found :"<<"["<< arr[start]<<" "<<arr[end]<<"]"<<endl;
            found = true;
            break;
        }
        else
        {
            if(arr[start]+arr[end]<target)
            {
                start++;
            }
            else{
                end--;
            }
        
        }
    }
     if(!found)
    {
        cout<<"Pair is not found"<<endl;
    }
    }
int main()
{
    int arr[] = {2,3,5,8,9,10};
    int n = 6;
    int target = 102;
    TwoSum(arr,n,target);
}
