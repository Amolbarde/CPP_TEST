
#include <iostream>
using namespace std;
//find min max

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
        
}
