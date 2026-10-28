/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class amol
{
    
public:
void FindMaxConsicutive(int arr[],int n)
    {
      int cnt1 = 0;
      int cnt0 = 0;
      
      for(int i=0;i<n;i++)
      {
          if(arr[i]==0)
          cnt0++;
          else
          cnt1++;
      }
      
      for(int i=0;i<cnt0;i++)
      {
          arr[i] = 0;
      }
      for(int i=cnt0;i<n;i++)
      {
          arr[i] = 1;
      }
    }
};
int main()
{
    amol a;
   int arr[] = {1,0,1,0,1,0};
   int n = 6;
   
   a.FindMaxConsicutive(arr,n);
   cout<<"Array:"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
}
