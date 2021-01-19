/*
Print the following pattern.

Input:
5

Output:


		*	
	*		*	
*				*	
	*		*	
		*	

NOTE: This question is also avalable in Cpp.
*/

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int outer_space = n / 2; 
        int inner_space = -1;
        for (int i = 0; i < n; i++) {
            // Printing outer space
            for(int j = 0; j < outer_space; j++)
                System.out.print("\t");
            System.out.print("*\t");
            // Checking and printing inner space
            if(inner_space > 0) {
                for(int j = 0; j < inner_space; j++)
                    System.out.print("\t");
                System.out.print("*\t");
            }
            // Incrementing/Decrementing values
            if(i < n/2) {
                outer_space -= 1;
                inner_space += 2;
            }
            else {
                outer_space += 1;
                inner_space -= 2;
            }
            System.out.println("");
        }
    }
}
