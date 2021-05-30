/*
Nth number made of prime digits

Given a number 'N'. The task is to find the Nth number whose 
each digit is a prime number i.e 2, 3, 5, 7. In other words you 
have to find nth number of this sequence : 2, 3, 5, 7, 22, 23 ,.. and so on.

Example 1:

Input:
N = 10
Output: 33
Explanation:10th number in the sequence of
numbers whose each digit is prime is 33.
Example 2:

Input:
N = 21
Output: 222
Explanation:21st number in the sequence of
numbers whose each digit is prime is 222.
Your Task:
Complete primeDigits function and return the nth number of the 
given sequence made of prime digits.

Constraints:
1 <= N <= 100 
*/

class Solution
{
public:
  //Function to find nth number made of only prime digits.
  int primeDigits(int n)
  {
    unordered_set<int> s{2, 3, 5, 7};
    int ans;
    if (n <= 4)
    {
      switch (n)
      {
      case 1:
        return 2;
        break;
      case 2:
        return 3;
        break;
      case 3:
        return 5;
        break;
      case 4:
        return 7;
        break;
      }
    }
    int count = 4;
    for (int i = 22; count < n; i++)
    {
      bool flag = true;
      int temp = i;
      while (temp > 0)
      {
        int dig = temp % 10;
        if (s.find(dig) == s.end())
        {
          flag = false;
          break;
        }
        temp /= 10;
      }
      if (flag)
      {
        ans = i;
        count++;
      }
    }
    return ans;
  }
};
