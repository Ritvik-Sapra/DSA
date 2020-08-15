/*
This file is like an introduction to how matrix are coded and handled in C++.
This depicts a simple program which first creates a matrix of sizww m X n
and traverses through that in a "snak pattern". For e.g. if the matrix is:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
The traversal would be:
------->
1 2 3 4 |
<--------
| 5 6 7 8
--------->
9 10 11 12|
<----------
| 13 14 15 16
------------>
So output would be: 1 2 3 4 8 7 6 5 9 10 11 12 16 15 14 13
NOTE: This program is also available in C++.
*/
import java.io.*;
import java.util.Scanner;
class Intro {
	public static void main (String[] args) {
        int m;
        int n;
		Scanner ip = new Scanner(System.in);
        m = ip.nextInt();   n = ip.nextInt();
        // Inputting and creating 2D array
		int arr[][] = new int[m][n];
		for(int i = 0; i < m; i ++)
		    for(int j = 0; j < n; j++)
                arr[i][j] = ip.nextInt();
        // Function call
        print_SnakePattern(arr);
        ip.close();
    }
    // Function to traverse matrix in snake pattern
	public static void print_SnakePattern(int arr[][]) {
	    for(int i = 0; i < arr.length; i++) {
	        if(i%2 == 0) { // If i is even, traverse from left to right
	            for(int j = 0; j < arr[i].length; j++)
	                System.out.print(arr[i][j] + " ");
	        }
	        else { // If i is odd, traverse from right to left
	            for(int j = arr[i].length - 1; j >= 0; j--) 
	                System.out.print(arr[i][j] + " ");
	        }
	    }
	}
}