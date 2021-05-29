/*
Repeating Character - First Appearance Leftmost

You are given a string S (both uppercase and lowercase characters). 
You need to print the repeated character whose first appearance is leftmost.

Example 1:

Input:
S = geeksforgeeks
Output: g
Explanation: We see that both e and g
repeat as we move from left to right.
But the leftmost is g so we print g.
Example 2:

Input:
S = abcd
Output: -1
Explanation: No character repeats so
we print -1.
Your Task:
This is a function problem. You only need to complete the function 
repeatedCharacter() that takes a string as a parameter and returns the 
index of the character. If no character repeats then return -1.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).

Constraints:
1 <= |S| <= 100
*/

class Solution
{
  const int CHAR = 256;

public:
  //Function to find repeated character whose first appearance is leftmost.
  int repeatedCharacter(const string &s)
  {
    //Your code here
    int fIndex[CHAR];
    fill(fIndex, fIndex + CHAR, -1);
    int res = INT_MAX;
    for (int i = 0; i < s.length(); i++)
    {
      int fi = fIndex[s[i]];
      if (fi == -1)
        fIndex[s[i]] = i;
      else
        res = min(res, fi);
    }
    return ((res == INT_MAX) ? -1 : res);
  }
};
