#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int arr[] = {10,20,10,30,10};
    unordered_map<int,int> mp;
    for(int i=0;i<5;i++)
    {
        mp[arr[i]]++;
    }
    
    cout<<mp[10];
    return 0;
}