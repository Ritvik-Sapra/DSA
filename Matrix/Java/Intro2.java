/*
This is another introduction to matrix which will solidify understanding and
working with matrix as a data structure. For a given matrix, we need to traverse
along the boundary of the matrix.
For e.g. if the input is:
1 2 3 4
5 6 7 8
9 10 11 12

Then the output should be:
1 2 3 4 8 12 11 10 9 5 1

NOTE: This program is also available in C++.
*/

import java.io.*;
import java.util.Scanner;
class Intro2 {
	public static void main (String[] args) {
		Scanner ip = new Scanner(System.in);
		int r, c;
		r = ip.nextInt();   c = ip.nextInt();
		int arr[][] = new int[r][c];
		for(int i = 0; i < r; i++)
		    for(int j = 0; j < c; j++)
		        arr[i][j] = ip.nextInt();
        boundaryTraversal(arr);
        ip.close();
	}
	public static void boundaryTraversal(int arr[][]) {
	    if(arr.length == 1) {
            // Corner case 1: when input has only 1 row
	        for(int i = 0; i < arr[0].length; i++) 
	            System.out.print(arr[0][i] + " ");
	    }
	    else if(arr[0].length == 1) {
            // Corner case 2: when input has only 1 column
	        for(int i = 0; i < arr.length; i++)
	            System.out.print(arr[i][0] + " ");
	    }
	    else {
            // Printing the upper boundary
	        for(int i = 0; i < arr[0].length; i++)
                System.out.print(arr[0][i] + " ");
            // Printing the right boundary
	        for(int i = 1; i < arr.length; i++)
                System.out.print(arr[i][arr[i].length - 1] + " ");
            // Printing the lower boundary
	        for(int i = arr[arr.length - 1].length - 2; i >= 0; i--)
                System.out.print(arr[arr.length - 1][i] + " ");
            // Printing the left boundary and wrapping up from where we started
	        for(int i = arr.length - 2; i >= 0; i--)
	            System.out.print(arr[i][0] + " ");
	    }
	}
}



