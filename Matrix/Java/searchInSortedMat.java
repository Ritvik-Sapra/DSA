/*
This program illustrates searching for an element in a sorted matrix.
A sorted matrix is something which has its rows and columns both sorted in
ascending order.

Input order:
First row contains rows and columns
Next line contains the element to be searched.
Following lines contain the matrix.

Output order:
One line. contains the position of the element present.

Input 1:
4 4
29
10 20 30 40
15 25 35 45
17 27 37 47
19 29 39 49

Output 1:
4 2

Input 2:
5 4
50
10 20 30 40
15 25 35 45
17 27 37 47
19 29 39 49
50 61 73 80

Output 2:
5 1

Input 3:
5 4
90
10 20 30 40
15 25 35 45
17 27 37 47
19 29 39 49
50 61 73 80

Output 3:
Element is not present in the matrix.

Time complexity: O(R + C), i.e. linear.
*/

import java.io.*;
import java.util.Scanner;
class searchInSortedMat {
	public static void main (String[] args) {
		Scanner ip = new Scanner(System.in);
		boolean isPresent; // To check is element is present in matrix or not
		int m = ip.nextInt();
		int n = ip.nextInt();
        int ele = ip.nextInt();
        // Inputting matrix
		int arr[][] = new int[m][n];
		for(int i = 0; i < m; i++)
		    for(int j = 0; j < n; j++)
		        arr[i][j] = ip.nextInt();
		// Function call to search
        isPresent = search_in_sorted_mat(arr, ele);
        // If element is not present
		if(!isPresent)
		    System.out.println("Element is not present in the matrix.");
		ip.close();
	}
	public static boolean search_in_sorted_mat(int arr[][], int ele) {
        boolean found = false;
        int i = 0;
        int j = arr[0].length - 1;
        /* We start from the top right corner. If element is greater than element
        then we move left, else we move down */
        while(((i >= 0) && (i < arr.length)) && ((j >= 0) && (j < arr[0].length))) {
            if(arr[i][j] == ele){
                System.out.println((i+1) + " " + (j+1));
                found = true;
                break;
            }
            else if(arr[i][j] > ele) {
                j--;
            }
            else
                i++;
        }
        return found;
    }
}