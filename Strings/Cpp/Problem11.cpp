/*
Keypad typing

You are given a string S of alphabet characters and the task is to find 
its matching decimal representation as on the shown keypad. Output the 
decimal representation corresponding to the string. For ex: if you are 
given “amazon” then its corresponding decimal representation will be 262966.

https://contribute.geeksforgeeks.org/wp-content/uploads/Phone.png
(image link)

Example 1:

Input:
S = geeksforgeeks
Output: 4335736743357
Explanation:geeksforgeeks is 4335736743357
in decimal when we type it using the given
keypad.
Example 2:

Input:
S = geeksquiz
Output: 433577849
Explanation: geeksquiz is 433577849 in
decimal when we type it using the given
keypad.
Your Task:
Complete printNumber() function that takes string s and its length as 
parameters and returns the corresponding decimal representation of the 
given string as a string type. The printing is done by the driver code.

Constraints:
1 ≤ length of String ≤ 100

Expected Time Complexity : O(n)
Expected Auxilliary Space : O(n)
*/

string printNumber(string s, int n)
{
  //code here
  string ans = "";
  for (int i = 0; i < n; i++)
  {
    if ((s[i] >= 'a') && (s[i] <= 'c'))
      ans += '2';
    else if ((s[i] >= 'd') && (s[i] <= 'f'))
      ans += '3';
    else if ((s[i] >= 'g') && (s[i] <= 'i'))
      ans += '4';
    else if ((s[i] >= 'j') && (s[i] <= 'l'))
      ans += '5';
    else if ((s[i] >= 'm') && (s[i] <= 'o'))
      ans += '6';
    else if ((s[i] >= 'p') && (s[i] <= 's'))
      ans += '7';
    else if ((s[i] >= 't') && (s[i] <= 'v'))
      ans += '8';
    else
      ans += '9';
  }
  return ans;
}
