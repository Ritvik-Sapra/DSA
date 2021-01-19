/*
1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.

Input:
5

Output:
*   *   *       *   *   *
*   *               *   *
*                       *
*   *               *   *
*   *   *       *   *   *

NOTE: This question is also available in Cpp.
*/

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int row = scn.nextInt();
        int col = row + 2;
        int space = 1;
        for(int i = 0; i < row; i++) {
            int star = (col - space) / 2;
            for(int j = 0; j < star; j++)
                System.out.print("*\t");
            for(int j = 0; j < space; j++)
                System.out.print("\t");
            for(int j = 0; j < star; j++)
                    System.out.print("*\t");
            if(i < row/2)
                space += 2;
            else
                space -= 2;
            System.out.println("");
        }
    }
}
