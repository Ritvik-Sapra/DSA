/*
Isomorphic Strings

Given two strings 'str1' and 'str2', check if these two strings 
are isomorphic to each other.
Two strings str1 and str2 are called isomorphic if there is a one 
to one mapping possible for every character of str1 to every character 
of str2 while preserving the order.
Note: All occurrences of every character in ‘str1’ should map to the same character in ‘str2’

Example 1:

Input:
str1 = aab
str2 = xxy
Output: 1
Explanation: There are two different
charactersin aab and xxy, i.e a and b
with frequency 2and 1 respectively.
Example 2:

Input:
str1 = aab
str2 = xyz
Output:
Explanation: There are two different
charactersin aab but there are three
different charactersin xyz. So there
won't be one to one mapping between
str1 and str2.
Your Task:
You don't need to read input or print anything.Your task is to complete 
the function areIsomorphic() which takes the string str1 and string str2 
as input parameter and  check if two strings are isomorphic. The function 
returns true if strings are isomorphic else it returns false.

Expected Time Complexity: O(|str1|+|str2|).
Expected Auxiliary Space: O(Number of different characters).
Note: |s| represents the length of string s.

Constraints:
1 <= |str1|, |str2| <= 103
*/

class Solution
{
  const int CHAR = 256;

public:
  //Function to check if two strings are isomorphic.
  bool areIsomorphic(string str1, string str2)
  {
    if (str1.length() != str2.length())
      return false;
    //using a boolean array to mark visited characters in str2.
    bool visited[MAX_CHARS] = {false};
    //using map to store mapping of every character from str1 to
    //that of str2. Initializing all entries of map as -1.
    int map[MAX_CHARS], len = str1.length();
    memset(map, -1, sizeof(map));
    for (int i = 0; i < len; i++)
    {
      //if current character of str1 is seen first time in map.
      if (map[str1[i]] == -1)
      {
        //if current character of str2 is already
        //seen, one to one mapping is not possible.
        if (visited[str2[i]] == true)
          return false;

        //marking current character of str2 as visited.
        visited[str2[i]] = true;

        //storing mapping of current characters.
        map[str1[i]] = str2[i];
      }
      //if this isn't first appearance of current character in str1 then
      //checking if previous appearance mapped to same character of str2.
      else if (map[str1[i]] != str2[i])
        return false;
    }
    return true;
  }
};
