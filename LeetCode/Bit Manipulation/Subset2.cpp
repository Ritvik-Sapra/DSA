/*
Given a collection of integers that might contain duplicates, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.
Input: [1,2,2]
Output:
[
  [2],
  [1],
  [1,2,2],
  [2,2],
  [1,2],
  []
]
*/

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector< vector <int> >PowSet;   // 2D vector to contain all sub sets
        int n = nums.size();
        int powSize = pow(2,n);
        
        // Finding all possible sub sets
        for(int i = 0; i < powSize; i++){
            vector<int> v1;
            for(int j = 0; j < n; j++){
                if((i & (1<<j)) != 0)
                    v1.push_back(nums[j]);
            }
            PowSet.push_back(v1);
        }
        
        // Removing duplicate sub sets
        sort(PowSet.begin(), PowSet.end());
        PowSet.erase(unique(PowSet.begin(), PowSet.end()), PowSet.end());
        
        return PowSet;
    }
};