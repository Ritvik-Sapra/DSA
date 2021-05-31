/*
Given an array of distinct elements which was initially sorted. This array is 
rotated at some unknown point. The task is to find the minimum element in the 
given sorted and rotated array. 

Input:
N = 10
arr[] = {2,3,4,5,6,7,8,9,10,1}
Output: 1
Explanation: The array is rotated 
once anti-clockwise. So minium 
element is at last index (n-1) 
which is 1.

Input:
N = 5
arr[] = {3,4,5,1,2}
Output: 1
Explanation: The array is rotated 
and the minimum element present is
at index (n-2) which is 1.

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(LogN).
*/

int minNumber(int arr[], int low, int high)
{
    // when all iterations are over
    if (high < low)  return arr[0];
    
    if (high == low) return arr[low];
    int mid = low + (high - low)/2; 
    
    // check if mid+1 element is the minimum
    if (mid < high && arr[mid+1] < arr[mid])
       return arr[mid+1];
      
    // check if mid element is minimum
    if (mid > low && arr[mid] < arr[mid - 1])
       return arr[mid];
       
    // recurse for the left half
    if (arr[high] > arr[mid])
       return minNumber(arr, low, mid-1);
       
    // recurse for the right half
    return minNumber(arr, mid+1, high);
}
