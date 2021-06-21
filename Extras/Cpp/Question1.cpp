/*
From LeetCode:
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.


Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Example 2:

Input: nums = []
Output: []
Example 3:

Input: nums = [0]
Output: []

Constraints:

0 <= nums.length <= 3000
-105 <= nums[i] <= 105
*/

class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums)
  {
    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
      if (i != 0 && nums[i - 1] == nums[i])
        continue;
      int j = i + 1, k = n - 1;
      while (j < k)
      {
        if (j != i + 1 && nums[j - 1] == nums[j])
        {
          j++;
          continue;
        }
        int target = nums[i] + nums[j] + nums[k];
        vector<int> sum;
        if (target == 0)
        {
          sum.push_back(nums[i]);
          sum.push_back(nums[j++]);
          sum.push_back(nums[k--]);
          ans.push_back(sum);
        }
        else if (target < 0)
          j++;
        else
          k--;
      }
    }
    return ans;
  }
};
