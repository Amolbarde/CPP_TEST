// Difference of Two Numbers [1,2,3] x=1; 2-1 = 1
#include <iostream>
using namespace std;
void DiffTwoNumbers(int arr[],int n, int target)
{
  bool found = found;
  for(int i=0;i<n;i++){
      int start = i+1;
      int end = n-1;
      int x = target+arr[i];
      while(start<=end)
      {
          int mid = (start+end)/2;
          if(arr[mid]==x)
          {
              cout << "Pair is: [" << arr[i] << ", " << arr[mid] << "]" << endl;
              found = true;
              break;
          }
          else if(arr[mid]<x)
          {
              start = mid+1;
          }
          else{
              end = mid-1;
          }
      }
  }
  if(!found)
  {
      cout<<"Pair is not found\n";
  }
}
int main()
{
   int arr[] = {3,4,5,6,50};
   int n = 5;
   int target = 46;
   DiffTwoNumbers(arr,n,target);
}
