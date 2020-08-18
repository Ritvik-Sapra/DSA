/*
This program illustrates Binary search in a sorted array through recursion.

The space complexity is worse than the iterative method since this has to
store multiple recursive calls in stack, while iterative method takes linear
space.

NOTE: A corresponding file called BinaryRecursive is present in the Java folder
(../Cpp/BinarySearch.cpp).
*/

import java.io.*;
import java.util.Scanner;
class BinaryRecursive {
	public static void main (String[] args) {
		Scanner ip = new Scanner(System.in);
		int n = ip.nextInt();
		int x = ip.nextInt();
		int arr[] = new int[n];
		for(int i = 0; i < n; i++)
		    arr[i] = ip.nextInt();
		int pos = bin_recursive(arr, 0, arr.length - 1, x);
		System.out.println(pos);
	}
	public static int bin_recursive(int arr[], int start, int end, int x) {
	    int mid = (start + end)/2;
	    if(start > end) // Base Case
	        return -1;
	    else if(arr[mid] == x)
	        return mid;
	   else if(arr[mid] > x)
	        return bin_recursive(arr, start, mid - 1, x);
	   else
	        return bin_recursive(arr, mid + 1, end, x);
	}
}