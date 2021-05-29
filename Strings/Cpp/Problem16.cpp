/*
Sum of numbers in string

Given a string str containing alphanumeric characters. 
The task is to calculate the sum of all the numbers present in the string.

Example 1:

Input:
str = 1abc23
Output: 24
Explanation: 1 and 23 are numbers in the
string which is added to get the sum as
24.
Example 2:

Input:
str = geeks4geeks
Output: 4
Explanation: 4 is the only number, so the
sum is 4.
Your Task:
The task is to complete the function findSum() which finds 
and returns the sum of numbers in the string.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= length of the string <= 105
Sum of Numbers <= 105
*/

class Solution
{
public:
  //Function to calculate sum of all numbers present in a string.
  int findSum(string str)
  {
    string temp = "";
    int sum = 0;

    //iterating over the string.
    for (char ch : str)
    {
      //if current character is digit, we store it in a temporary string.
      if (isdigit(ch))
        temp += ch;
      else
      {
        //incrementing final sum by number stored in temporary string.
        sum += atoi(temp.c_str());
        //making the temporary string empty again.
        temp = "";
      }
    }
    //adding any number if it's present in temporary
    //string to final sum and returning it.
    return sum + atoi(temp.c_str());
  }
};
