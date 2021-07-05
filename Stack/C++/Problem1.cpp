/*
Balanced Paranthesis
We are given a string of paranthesis and we have to check if the paranthesis
is balanced or not. Balanced string means the paranthesis that has opened last
should be closed first.

Input: "(([[{{}}]]))"
Output: Yes
Input: "(([))]"
Output: No
*/

#include <iostream>
#include <stack>
using namespace std;

bool matching(char a, char b)
{
  return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
}

bool isBalanced(string str)
{
  stack<char> s;
  for (char x : str)
  {
    if (x == '(' || x == '[' || x == '{')
      s.push(x);
    else
    {
      if (s.empty())
        return false;
      else if (matching(s.top(), x))
        s.pop();
      else
        return false;
    }
  }
  return s.empty();
}

int main()
{
  string str = "(([)])";
  if (isBalanced(str))
    cout << "Yes";
  else
    cout << "No";
  return 0;
}
