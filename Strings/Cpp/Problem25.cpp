/*
Pattern Search KMP

Given a string S and a pattern P of all lowercase characters. 
The task is to check if the pattern exists in the string or not.

Example 1:

Input:
S = aabaacaadaabaaba
P = aaaab
Output: No
Explanation: Given pattern is not found
in the given string S.
Example 2:

Input:
S = aabaacaadaabaaba
P = caada
Output: Yes
Explanation: Given pattern is found in
the given string S.
Your Task:
The task is to complete the function KMPSearch() which returns true or false 
depending on whether pattern is present in the string or not, and computeLPSArray() 
which computes the longest prefix suffix for every index.

Expected Time Complexity: O(N+M).
Expected Auxiliary Space: O(M).
Note: N = |S|, M = |P|.

Constrsaints:
1 <= |S|, |P| <= 104
*/

//Function to fill lps[] for given patttern pat[0..M-1].
void computeLPSArray(string pat, int M, int *lps)
{
  int i = 1, len = 0;
  lps[0] = 0;
  while (i < M)
  {
    if (pat[i] == pat[len])
    {
      len++;
      lps[i] = len;
      i++;
    }
    else
    {
      if (len == 0)
      {
        lps[i] = 0;
        i++;
      }
      else
      {
        len = lps[len - 1];
      }
    }
  }
}

//Function to check if the pattern exists in the string or not.
bool KMPSearch(const string &pat, const string &txt)
{
  int N = txt.length(), M = pat.length();
  int lps[M];
  computeLPSArray(pat, M, lps);
  int j = 0, i = 0;
  while (i < N)
  {
    if (txt[i] == pat[j])
    {
      i++;
      j++;
    }
    if (j == M)
    {
      return true;
    }
    else if ((i < N) && (txt[i] != pat[j]))
    {
      if (j == 0)
      {
        i++;
      }
      else
      {
        j = lps[j - 1];
      }
    }
  }
  return false;
}
