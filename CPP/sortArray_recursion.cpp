#include <iostream>
#include <vector>
using namespace std;
bool sortArray(vector<int> arr,int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    return arr[n-1]>=arr[n-2] && sortArray(arr,n-1);
}

int main()
{
    vector<int> arr = {1,2,3,4,5,3};
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
