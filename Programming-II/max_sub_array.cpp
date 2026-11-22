#include<iostream>
using namespace std;
int maxSub(int arr[],int low,int high)
{
    if(low==high)
    {
        return arr[low];
    }
   int mid = (low+high)/2;
   int  left = maxSub(arr,low,mid);
   int right = maxSub(arr,mid+1,high);

   int sum = 0, leftSum = -9999, rightSum = -9999;
   for(int i=mid;i>=low;i--)
   {
    sum+=arr[i];
    if(sum>leftSum)
    {
       leftSum = sum;
    }
   }
   
   sum = 0;
   for(int i = mid+1;i<=high;i++)
    {
        sum+=arr[i];
        if(sum>rightSum)
        {
            rightSum = sum;
        }
    }

    int cross = leftSum+rightSum;
    if(left>=right && leftSum>=cross)
    return left;
    if(right>=left && leftSum>=cross)
    return right;
    else
    return cross;
}

int main()
{
    int arr[] = {4,8,7,5};
    int n = 5;
    cout<<"MAximum Sum:"<<maxSub(arr,0,n-1)<<endl;
    return 0;

}

/*  
amol@amol-HP-ProBook-440-G3:~/Programming-II$ g++ max_sub_array.cpp
amol@amol-HP-ProBook-440-G3:~/Programming-II$ ./a.out
MAximum Sum:25
*/


