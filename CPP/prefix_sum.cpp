#include<iostream>
using namespace std;
int main()
{
    int arr[] = { 2,4,1,5,3};
    int n = 5;
    int prefix[5];
    prefix[0] = arr[0];
    
    for(int i=1;i<n;i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<prefix[i]<<" ";
    }
    cout<<endl;

        cout<<prefix[3]+arr[5];
    

    
}

//output 
/*2 6 7 12 15 
17
*/
