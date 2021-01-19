/*
Print the following pattern:
Input: 
5

Output:
*
    *
        *
            *
                *

Note: This question is also available in Cpp.
*/

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int row = scn.nextInt();
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < row; j++) {
                if(i == j)
                    System.out.print("*\t");
                else
                    System.out.print("\t");
            }
            System.out.println("");
        }
    }
}
