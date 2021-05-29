/*
Non Repeating Character

Given a string S consisting of lowercase Latin Letters. 
Find the first non-repeating character in S.

Example 1:

Input:
S = hello
Output: h
Explanation: In the given string, the
first character which is non-repeating
is h, as it appears first and there is
no other 'h' in the string.
Example 2:

Input:
S = zxvczbtxyzvy
Output: c
Explanation: In the given string, 'c' is
the character which is non-repeating. 
Your Task:
You only need to complete the function nonrepeatingCharacter() 
that takes string S as a parameter and returns the character. 
If there is no non-repeating character then return '$' .

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |S|

Constraints:
1 <= N <= 103
*/

class Solution
{
  const int CHAR = 256;

public:
  //Function to find the first non-repeating character in a string.
  char nonrepeatingCharacter(string S)
  {
    int fI[CHAR], res = INT_MAX;
    fill(fI, fI + CHAR, -1);
    for (int i = 0; i < S.length(); i++)
    {
      if (fI[S[i]] == -1)
        fI[S[i]] = i;
      else
        fI[S[i]] = -2;
    }
    for (int i = 0; i < CHAR; i++)
      if (fI[i] >= 0)
        res = min(res, fI[i]);
    return ((res == INT_MAX) ? '$' : S[res]);
  }
};
