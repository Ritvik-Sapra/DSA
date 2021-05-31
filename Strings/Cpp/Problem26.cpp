/*
Rabin Karp - Pattern Searching

Given a string S and a pattern P of lowercase characters. 
The task is to check if the pattern is present in string or not.

Example 1:

Input:
S = aabaacaadaabaaba
P = aaba
Output: Yes
Explanation: You can find the patter at
starting at index 12.
Example 2:

Input:
S = aabaacaadaabaaba
P = asdfa
Output: No
Explanation: Pattern doesn't exist in
the given string S.
Your Task:
You need to complete the function search which takes 3 arguments(S, 
P and prime q) and returns true if the pattern is found else returns false.

Expected Time Complexity: O(N + M).
Expected Auxiliary Space: O(1).
Note: N = |S|, M = |P|.

Constraints:
1 <= |S|, |P| <= 104
*/

// d is the number of characters in the input alphabet
#define d 256

//Function to check if the pattern is present in string or not.
bool search(string pat, string txt, int q)
{
  // Your code here
  int N = txt.length(), M = pat.length(), h = 1;
  // Compute d^(m-1)
  for (int i = 1; i < M; i++)
  {
    h = (h * d) % q;
  }
  int t = 0, p = 0;
  // Computing t0 and p0 for the first window
  for (int i = 0; i < M; i++)
  {
    t = ((t * d) + txt[i]) % q;
    p = ((p * d) + pat[i]) % q;
  }
  for (int i = 0; i <= (N - M); i++)
  {
    if (t == p)
    { // Check for hit
      bool flag = true;
      // Confirm if its a spurious hit or not
      for (int j = 0; j < M; j++)
      {
        if (txt[i + j] != pat[j])
        {
          flag = false;
          break;
        }
      }
      if (flag)
      {
        return true;
      }
    }
    // Rolling hash
    if (i < (N - M))
    {
      // Computing hash for next window using hash of previous window
      t = ((d * (t - txt[i] * h)) + txt[i + M]) % q;
      if (t < 0)
      {
        t += q;
      } // Always keep t positive
    }
  }
  return false;
}
