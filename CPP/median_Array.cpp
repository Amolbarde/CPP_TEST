#include<iostream>
#include <algorithm>
#include<vector>

using namespace std;
class Solution{
public:
 double FindMedianSortedArray(vector<int> & nums1,vector<int> & nums2)
 {
  vector<int> a;
  for(int x:nums1)
  a.push_back(x);
  
  for(int x:nums2)
  a.push_back(x);
  
  sort(a.begin(), a.end());
  int n = a.size();
  if(n%2==1)
  {
  return a[n/2];
 }
 return (a[n/2-1] + a[n/2])/2.0;
 }
};

int main()
{
 vector<int> a = {1,2};
 vector<int> b = {3,4};
 
 Solution s;
 double res = s.FindMedianSortedArray(a,b);
 cout<<res;
}
