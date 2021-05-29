/*
Remove common characters and concatenate

Given two strings s1 and s2. Modify both the strings such that 
all the common characters of s1 and s2 are to be removed and the 
uncommon characters of s1 and s2 are to be concatenated.
Note: If all characters are removed print -1.

Example 1:

Input:
s1 = aacdb
s2 = gafd
Output: cbgf
Explanation: The common characters of s1
and s2 are: a, d. The uncommon characters
of s1 and s2 are c, b, g and f. Thus the
modified string with uncommon characters
concatenated is cbgf.
Example 2:

Input:
s1 = abcs
s2 = cxzca
Output: bsxz
Explanation: The common characters of s1
and s2 are: a,c. The uncommon characters
of s1 and s2 are b,s,x and z. Thus the
modified string with uncommon characters
concatenated is bsxz.
Your Task:
The task is to complete the function concatenatedString() which 
removes the common characters, concatenates, and returns the string. 
If all characters are removed then return -1.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |Length of Strings|

Constraints: 
1 <= |Length of Strings| <= 104
*/

class Solution
{
public:
  //Function to remove common characters and concatenate two strings.
  string concatenatedString(string s1, string s2)
  {
    // Your code here
    unordered_map<char, int> ump;
    string ans = "";
    for (int i = 0; i < s2.length(); i++)
      ump[s2[i]] = 1;
    for (int i = 0; i < s1.length(); i++)
    {
      if (ump.find(s1[i]) == ump.end())
        ans += s1[i];
      else
        ump[s1[i]] = 2;
    }
    for (int i = 0; i < s2.length(); i++)
      if (ump[s2[i]] == 1)
        ans += s2[i];
    return ((ans == "") ? "-1" : ans);
  }
};
