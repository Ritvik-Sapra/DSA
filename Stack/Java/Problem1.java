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

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class GFG {
  public static boolean matching(char a, char b) {
    return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
  }

  public static boolean isBalanced(String str) {
    Deque<Character> s = new ArrayDeque<>();
    for (int i = 0; i < str.length(); i++) {
      if (str.charAt(i) == '(' || str.charAt(i) == '[' || str.charAt(i) == '{')
        s.push(str.charAt(i));
      else {
        if (s.isEmpty())
          return false;
        else if (matching(s.peek(), str.charAt(i)))
          s.pop();
        else
          return false;
      }
    }
    return s.isEmpty();
  }

  public static void main(String[] args) {
    String s = "{}([])";
    if (isBalanced(s))
      System.out.println("Yes");
    else
      System.out.println("No");
  }
}
