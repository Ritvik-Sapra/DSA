/*
Case-specific Sorting of Strings

Given a string S consisting of uppercase and lowercase characters. 
The task is to sort uppercase and lowercase letters separately such 
that if the ith place in the original string had an Uppercase character 
then it should not have a lowercase character after being sorted and vice versa.

Example 1:

Input:
N = 12
S = defRTSersUXI
Output: deeIRSfrsTUX
Explanation: Sorted form of given string
with the same case of character as that
in original string is deeIRSfrsTUX
Example 2:

Input:
N = 6
S = srbDKi
Output: birDKs
Explanation: Sorted form of given string
with the same case of character will
result in output as birDKs.
Your Task:
You only need to complete the function caseSort that returns sorted string.

Expected Time Complexity: O(N*Log(N)).
Expected Auxiliary Space: O(N).

Constraints:
1 ≤ N ≤ 103
*/

class Solution
{
public:
  //Function to perform case-specific sorting of strings.
  string caseSort(string str, int n)
  {
    // your code here
    int x = 0, y = 0;
    vector<char> lower, upper;
    for (int i = 0; i < n; i++)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
        lower.push_back(str[i]);
      else
        upper.push_back(str[i]);
    }
    sort(lower.begin(), lower.end());
    sort(upper.begin(), upper.end());
    for (int i = 0; i < n; i++)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
        str[i] = lower[x++];
      else
        str[i] = upper[y++];
    }
    return str;
  }
};
