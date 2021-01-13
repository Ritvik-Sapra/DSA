/*
1. You are required to check if a given set of numbers is a valid pythagorean triplet.
2. Take as input three numbers a, b and c.
3. Print true if they can form a pythagorean triplet and false otherwise.

Input:
5 4 3

Output:
true

Note: This program is also available in Cpp.
*/

import java.util.*;

public class Main {

    public static void main(String[] args) {
        // write your code here  
        Scanner scn = new Scanner(System.in);
        int a = scn.nextInt();
        int b = scn.nextInt();
        int c = scn.nextInt();
        int max = a;
        boolean flag;
        if(b >= max)
            max = b;
        if(c >= max)
            max = c;
        
        if(max == a) {
            flag = ((b*b + c*c) == (a*a));
        }
        else if(max == b) {
            flag = ((a*a + c*c) == (b*b));
        }
        else {
            flag = ((a*a + b*b) == (c*c));
        }
        System.out.println(flag);
    }
}
