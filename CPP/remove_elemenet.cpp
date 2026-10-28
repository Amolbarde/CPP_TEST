#include<iostream>
#include<vector>

using namespace std;
    int removeElement(vector<int>& nums, int val)
     {
      int k=0;
      for(int i=0;i<nums.size();i++)
      {
       if(nums[i]!=val)
       {
        nums[i] = nums[i];
        k++;
       }
      }
      return k;
     }

 
 int main()
 {
  vector<int> vec1 = {1,2,3,6,5,4,5};
  int val = 5;
  int res = removeElement(vec1,val);
  cout<<res;
 }      
