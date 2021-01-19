/*
Print the following pattern.
Input:
5

Output:

*				*	
	*		*		
		*			
	*		*		
*				*	

NOTE: This question is also available in Cpp.
*/

import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if((i == j) || (j == n-i-1))
                    System.out.print("*\t");
                else
                    System.out.print("\t");
            }
            System.out.println("");
        }
    }
}
