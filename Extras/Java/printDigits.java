/*
Print the digits of a number individually.
Input:
34513

Output:
3
4
5
1
3

Note: This question is also available in Cpp.
*/

import java.util.*;

public class Main {

    public static void main(String[] args) {
        // write your code here  
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        printDigits(n);
    }
    public static void printDigits(int n) {
        if(n == 0)  // Base case
            return;
        int d = n%10;
        printDigits(n/10);
        System.out.println(d);
    }
}
