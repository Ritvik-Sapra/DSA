/*
From LeetCode:
Given a string s, find the length of the longest substring without repeating characters.


Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
Example 4:

Input: s = ""
Output: 0

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/

class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    int n = s.length(), res = 0, i = 0;
    vector<int> prev(256, -1);
    for (int j = 0; j < n; j++)
    {
      i = max(i, prev[s[j]] + 1);
      int maxEnd = j - i + 1;
      res = max(maxEnd, res);
      prev[s[j]] = j;
    }
    return res;
  }
};
