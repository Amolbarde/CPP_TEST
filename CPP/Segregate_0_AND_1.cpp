
#include <iostream>
using namespace std;
class Solution
{
    public:
    void Segregate0and1(int arr[],int n)
    {
        int start = 0, end = n-1;
        while(start<end)
        {
            if(arr[start] == 0)
            {
                start++;
            }
            else
            {
                if(arr[end] == 0)
                {
                    int temp = arr[start];
                    arr[start] = arr[end];
                    arr[end] = temp;
                    start++;
                    end--;
                }
                else
                {
                    end--;
                }
            }
        }
    }
};
int main()
{
   Solution s;    
   int arr[] = {1,0,1,0,1,0};
   int n = 6;
   s.Segregate0and1(arr,n);
    cout<<"Array:"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   
}

//output: 0 0 0 1 1 1 Complexity O(n)
