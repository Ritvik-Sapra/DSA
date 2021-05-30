/*
Pangram Checking

Given a string check if it is Pangram or not. A pangram is a sentence containing every letter in the English Alphabet.

Example 1:

Input:
S = Bawds jog, flick quartz, vex nymph
Output: 1
Explantion: In the given input, there
are all the letters of the English
alphabet. Hence, the output is 1.
Example 2:

Input:
S = sdfs
Output: 0
Explantion: In the given input, there
aren't all the letters present in the
English alphabet. Hence, the output
is 0.
Your Task:
You need to complete the function checkPangram() that takes a string as a parameter and returns true if the string is a pangram, else it returns false.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Number of distinct characters).

Constraints:
1 <= |S| <= 104
*/

class Solution
{
public:
  //Function to check if a string is Pangram or not.
  bool checkPangram(string &str)
  {
    // your code here
    bool visited[26] = {false};
    for (int i = 0; i < str.length(); i++)
    {
      if ((str[i] >= 'A') && (str[i] <= 'Z'))
        visited[str[i] - 'A'] = true;
      else if ((str[i] >= 'a') && (str[i] <= 'z'))
        visited[str[i] - 'a'] = true;
    }
    for (int i = 0; i < 26; i++)
      if (!visited[i])
        return false;
    return true;
  }
};
