#include<iostream>
using namespace std;
int main()
{
    int arr[] = {6,7,4,3,5,6};
    int n = 6;
    int min = arr[0];
    int index = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            index  = i;
        }
    }

    cout<<"min : "<<min;
    cout<<"\n index : "<<index;
}