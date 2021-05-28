/*
Given an array of 0s and 1s. Find the length of the largest 
subarray with equal number of 0s and 1s.

Example 1:

Input:
N = 4
A[] = {0,1,0,1}
Output: 4
Explanation: The array from index [0...3]
contains equal number of 0's and 1's.
Thus maximum length of subarray having
equal number of 0's and 1's is 4.
Example 2:

Input:
N = 5
A[] = {0,0,1,0,0}
Output: 2
Your Task:
You don't need to read input or print anything. Your task is 
to complete the function maxLen() which takes the array arr[] 
and the size of the array as inputs and returns the length of 
the largest subarray with equal number of 0s and 1s.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= N <= 105
0 <= A[] <= 1
*/

/*
arr[] : the input array containing 0s and 1s
N : size of the input array

return the maximum length of the subarray
with equal 0s and 1s
*/

class Solution
{
public:
  int maxLen(int arr[], int n)
  {
    // Your code here
    int res = 0, pre_sum = 0;
    unordered_map<int, int> ump;
    // Replace all 0's with -1
    for (int i = 0; i < n; i++)
      if (arr[i] == 0)
        arr[i] = -1;
    // Find the longest subarray with 0 sum
    // ump stores every prefix sum and its index
    for (int i = 0; i < n; i++)
    {
      pre_sum += arr[i];
      if (pre_sum == 0) // Starts from index 0
        res = i + 1;
      if (ump.find(pre_sum) != ump.end())
        res = max(res, i - ump[pre_sum]);
      else
        ump[pre_sum] = i;
    }
    return res;
  }
};
