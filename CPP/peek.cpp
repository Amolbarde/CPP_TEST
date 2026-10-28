/*
Example 1:

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
*/
#include<iostream>
#include<vector>

using namespace std;
int findPeekElement(vector<int>& nums)
{
 int low = 0;
 int high = nums.size()-1;

 while(low<high)
 {
    int mid = (low+high)/2;
    if(nums[mid]>nums[mid+1])
    {
        high = mid;
    }
    else{
        low = mid+1;
    }
 }
 return high;
}
int main()
{
    vector<int> nums= {2,3,4,5,6,7};
   int ans= findPeekElement(nums);
   cout<<ans;
}

