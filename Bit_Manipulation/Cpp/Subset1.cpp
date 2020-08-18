
/*
Given a set of distinct integers, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.
Input: nums = [1,2,3]
Output:
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]
*/
class Solution{
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int powSize = pow(2, n);
        vector<vector<int> >powSet;
        for(int i = 0; i < powSize; i++){
            vector<int> v1;
            for(int j = 0; j < n; j++){
                if((i & (1<<j)) != 0)
                    v1.push_back(nums[j]);
            }
            powSet.push_back(v1); 
        }
        return powSet;
    }
};