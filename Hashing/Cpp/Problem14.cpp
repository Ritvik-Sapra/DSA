/*
Subarray range with given sum

Given an unsorted array of integers and a sum. The task is to count 
the number of subarray which adds to the given sum.

Example 1:

Input:
n = 5
arr[] = {10,2,-2,-20,10}
sum = -10
Output: 3
Explanation: Subarrays with sum -10 are: 
[10, 2, -2, -20], [2, -2, -20, 10] and 
[-20, 10].
Example 2:

Input:
n = 6
arr[] = {1,4,20,3,10,5}
sum = 33
Output: 1
Explanation: Subarray with sum 33 is: 
[20,3,10].
Your Task:
This is a function problem. You only need to complete the function 
subArraySum() that takes arr, n, sum as parameters and returns the 
count of subarrays which adds up to the given sum. 

Expected Time Comlexity: O(n)
Expected Auxilary Space: O(n)
*/

//Function to count the number of subarrays which adds to the given sum.
int subArraySum(int arr[], int n, int sum)
{
  //Your code here
  unordered_map<int, int> mp;
  int count = 0, pre_sum = 0;
  for (int i = 0; i < n; i++)
  {
    pre_sum += arr[i];
    if (pre_sum == sum)
      count++;
    if (mp.find(pre_sum - sum) != mp.end())
      count += mp[pre_sum - sum];
    mp[pre_sum]++;
  }
  return count;
}
