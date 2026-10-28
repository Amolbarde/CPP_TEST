#include <iostream>
using namespace std;
bool sortArray(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = size(arr);
    if(sortArray(arr,n))
    {
        cout<<"sort array";
    }
    else{
        cout<<"Not sort";
    }
cout<<endl;
int x=size(arr);
// x = sizeof(arr)/sizeof(arr[0]);
cout<<"Array size:"<<x;

}
