#include<iostream>
using namespace std;
int getMin(int a[], int n)
{
 int min = 0;
 for(int k=1; k<n; k++)
 {
  if(a[k] < a[min])
  {
   min = k;
  }
 }
 return min;
}
int main()
{
 int a[] = {4,2,1,3,4};
 int n = 5;
 int index = getMin(a,n);
 cout <<"min val : "<< a[index] << endl;
 cout <<"Index : "<< index << endl;
 
}
