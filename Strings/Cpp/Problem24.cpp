/*
Lexicographic Rank Of A String

You are given a string S of lowercase characters, find the 
rank of the string amongst its permutations when sorted lexicographically. 
Return 0 if the characters are repeated in the string.
Note: Return the rank%1000000007 as the answer as rank might overflow.

Example 1:

Input:
S = abc
Output: 1
Explanation: In 'abc' when we sort all the
permutations in lexicographic order 'abc'
will be at the first position.
Example 2:

Input:
S = acb
Output: 2
Explanation: In 'acb' .The
lexicographically sorted permutations
with letters 'a', 'c', and 'b' will be
at second position. 
Your Task:
You only need to complete the function findRank that takes 
string S as a parameter and returns the rank.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ |S| ≤ 26
*/

#define MOD 1000000007
class Solution
{
public:
  //Function to generate the list of factorials.
  void initializeFactorials(int totalLen, vector<int> &fact)
  {
    long long int factorial = 1;
    fact.push_back(1);
    for (int curIndex = 1; curIndex < totalLen; curIndex++)
    {
      factorial = (factorial * curIndex) % MOD;
      fact.push_back(factorial);
    }
    return;
  }

  //Function to find lexicographic rank of a string.
  int findRank(string S)
  {
    int charCount[256];
    memset(charCount, 0, sizeof(charCount));

    //counting the characters of the string.
    for (int i = 0; i < S.length(); i++)
    {
      charCount[S[i]]++;

      //returning 0 if any character is repeated.
      if (charCount[S[i]] > 1)
        return 0;
    }

    vector<int> fact;
    initializeFactorials(S.length() + 1, fact);

    long long int rank = 1;

    //iterating over the string.
    for (int i = 0; i < S.length(); i++)
    {
      int less = 0;
      for (int ch = 0; ch < S[i]; ch++)
      {
        less += charCount[ch];
      }
      //calculating the rank.
      rank = (rank + ((long long)fact[S.length() - i - 1] * less)) % MOD;

      //updating the character count.
      charCount[S[i]]--;
    }
    //returning the rank.
    return rank;
  }
};
