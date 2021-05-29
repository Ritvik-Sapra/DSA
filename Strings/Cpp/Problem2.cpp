/*
Improved Naive Pattern Search
(Pat string contains only distinct chars
)
Given a string S and a pattern P consisting of lowercase characters. The task is to check if pattern P exists in the given string S or not.

Example 1:

Input:
S = abceabcdabceabcd
P = abcd
Output: Yes
Explanation: Given pattern abcd is
present at index 4.
Example 2:

Input:
S = abceabcdabceabcd
P = gfhij
Output: No
Explanation: Given pattern gfhij is
not found in the string.
Your Task:
The task is to complete the function search() which finds for the pattern with distinct characters. The function takes string and pattern as parameters and returns either true or false. Return true if pattern is found else return false.

Expected Time Complexity: O(N + M).
Expected Auxiliary Space: O(1).
Note: N = |S|, M = |P|.

Constraints:
1 <= |S|, |P| <= 103
*/

class Solution
{
public:
  //Function to check if the given pattern exists in the given string or not.
  bool search(string pat, string txt)
  {
    // Your code here
    int n = txt.length(), m = pat.length();
    for (int i = 0; i < n;)
    {
      int j;
      for (j = 0; j < m; j++)
      {
        if (txt[i + j] != pat[j])
          break;
      }
      if (j == m)
        return true;
      if (j == 0)
        i++;
      else
        i += j;
    }
    return false;
  }
};
