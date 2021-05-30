/*
Smallest window in a string containing all the characters of another string

Given two strings S and P. Find the smallest window in 
the S consisting of all the characters of P.

Example 1:

Input:
S = "timetopractice"
P = "toc"
Output: 
toprac
Explanation: "toprac" is the smallest
substring in which "toc" can be found.
Example 2:

Input:
S = "zoomlazapzo"
P = "oza"
Output: 
apzo
Explanation: "apzo" is the smallest 
substring in which "oza" can be found.
Your Task:
You don't need to read input or print anything. Your task is to complete 
the function smallestWindow() which takes two string S and P as input 
paramters and returns the smallest window in string S having all the 
characters of the string P. In case there are multiple such windows of 
same length, return the one with the least starting index. Return "-1" 
in case there is no such window present. 

Expected Time Complexity: O(|S|)
Expected Auxiliary Space: O(1)

Constraints: 
1 ≤ |S|, |P| ≤ 105
*/

class Solution
{
public:
  //Function to find the smallest window in the string s consisting
  //of all the characters of string p.
  string smallestWindow(const string &s, const string &p)
  {
    int n = s.length(), m = p.length();
    if (m > n)
      return "-1";
    int shash[26] = {0}, phash[26] = {0};
    for (int i = 0; i < m; i++)
      phash[p[i] - 'a']++;
    int length = 0, startindex = -1, minlength = INT_MAX, begin = 0, counter = 0;
    for (int i = 0; i < n; i++)
    {
      shash[s[i] - 'a']++;
      if ((phash[s[i] - 'a'] != 0) && (shash[s[i] - 'a'] <= phash[s[i] - 'a']))
        counter++;
      if (counter == m)
      {
        while ((phash[s[begin] - 'a'] == 0) || shash[s[begin] - 'a'] > phash[s[begin] - 'a'])
        {
          shash[s[begin] - 'a']--;
          begin++;
        }
        length = i - begin + 1;
        if (length < minlength)
        {
          minlength = length;
          startindex = begin;
        }
      }
    }
    return ((startindex == -1) ? "-1" : s.substr(startindex, minlength));
  }
};
