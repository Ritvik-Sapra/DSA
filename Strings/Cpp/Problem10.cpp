/*
Check if a string is Isogram or not

Given a string S of lowercase alphabets, check if it is isogram or not. 
An Isogram is a string in which no letter occurs more than once.

Example 1:

Input:
S = machine
Output: 1
Explanation: machine is an isogram
as no letter has appeared twice. Hence
we print 1.
Example 2:

Input:
S = geeks
Output: 0
Explanation: geeks is not an isogram
as 'e' appears twice. Hence we print 0.
Your Task:
This is a function problem. You only need to complete the function isIsogram() 
that takes a string as a parameter and returns either true or false.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).
Note: N = |S|

Constraints:
1 <= |s| <= 103
*/

class Solution
{
  const int CHAR = 256;

public:
  //Function to check if a string is Isogram or not.
  bool isIsogram(const string &s)
  {
    bool count[CHAR] = {false};
    for (int i = 0; i < s.length(); i++)
    {
      if (count[s[i]])
        return false;
      else
        count[s[i]] = true;
    }
    return true;
  }
};
