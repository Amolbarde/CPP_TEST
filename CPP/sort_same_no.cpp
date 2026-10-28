/*
Input: nums = [2,0,2,1,1,0]

Output: [0,0,1,1,2,2]

Explanation:

The array has two 0s, two 1s, and two 2s. Sorting them in-place places all 0s first, then all 1s, then all 2s.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void  sortColors(vector<int>& nums)
{
  int low = 0;
  int mid = 0;
  int high = nums.size()-1;

  while(mid<=high)
  {
    if(nums[mid] == 0)
    {
        swap(nums[low],nums[mid]);
        low++;
        mid++;
    }
    else if(nums[mid] == 1)
    {
        mid++;
    }
    else{
        swap(nums[mid],nums[high]);
        high--;
    }
  }
}

int main()
{
    vector<int> nums = {2,0,2,1,1,0};
    sortColors(nums);
    for (int x : nums)
    {
     cout<< x<<" ";
    }
}