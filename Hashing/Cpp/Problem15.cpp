/*
Positive Negative Pair

Given an array of distinct integers, find all the pairs having 
both negative and positive values of a number in the array.

Example 1:

Input:
n = 8
arr[] = {1,3,6,-2,-1,-3,2,7}
Output: -1 1 -3 3 -2 2
Explanation: 1, 3 and 2 are present 
pairwirse postive and negative. 6 and 
7 have no pair.

Example 2:

Input:
n = 3
arr[] = {3,2,1}
Output: 0
Explanation: No such pair exists so the 
output is 0.

Your Task:
You do not need to read input or print anything. Complete the 
function findPairs() which takes the array A[] and the size of 
the array, n, as input parameters and returns a list of integers 
denoting the pairs. The pair that appears first in A[] should 
appear first in the returning list and within the pair the negative 
integer should appear before positive integer. Return an empty 
integer list if no such pair exists. 

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)
*/

//Function to return list containing all the pairs having both
//negative and positive values of a number in the array.
vector<int> findPairs(int arr[], int n)
{
  // code here
  unordered_set<int> s;
  vector<int> ans;
  for (int i = 0; i < n; i++)
  {
    if (s.find(abs(arr[i])) != s.end())
    {
      s.erase(abs(arr[i]));
      if (arr[i] > 0)
      {
        ans.push_back(arr[i] * -1);
        ans.push_back(arr[i]);
      }
      else
      {
        ans.push_back(arr[i]);
        ans.push_back(arr[i] * -1);
      }
    }
    else
      s.insert(abs(arr[i]));
  }
  return ans;
}
