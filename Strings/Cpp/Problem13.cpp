/*
Maximum Occuring Character
Given a string str. The task is to find the maximum occurring 
character in the string str. If more than one character occurs 
the maximum number of time then print the lexicographically 
smaller character.

Example 1:

Input:
str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.
Example 2:

Input:
str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.
Your Task:
The task is to complete the function getMaxOccuringChar() 
which returns the character which is most occurring.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |s|

Constraints:
1 ≤ |s| ≤ 100
*/

class Solution
{
public:
  //Function to find the maximum occurring character in a string.
  char getMaxOccuringChar(string str)
  {
    // Your code here
    map<char, int> m;
    char ans;
    int maxOcc = 0;
    for (int i = 0; i < str.length(); i++)
      m[str[i]]++;
    for (auto x : m)
    {
      if (x.second > maxOcc)
      {
        ans = x.first;
        maxOcc = x.second;
      }
    }
    return ans;
  }
};
