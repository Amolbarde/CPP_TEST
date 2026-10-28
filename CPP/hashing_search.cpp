#include<iostream>
using namespace std;
int main()
{
    int table[20] = {0};
    //store val
    int arr[] = {25,12,37,42};
    for(int i=0;i<4;i++)
    {
        int index = arr[i]%10;
        table[index] = arr[i];
    }
    int key = 25;
    int index = key%10;

    if(table[index] == key)
    {
        cout<<"found";
    }
    else{
        cout <<"not found";
    }
    return 0;
}