/*
A peak element in an array is the one that is not smaller than its neighbours.
Given an array of size N, find the index of any one of its peak elements.

Input:
N = 3
arr[] = {1,2,3}
Output: 2 
Explanation: index 2 is 3.
It is the peak element as it is 
greater than its neighbour 2.

Input:
N = 2
arr[] = {3,4}
Output: 1
Explanation: 4 (at index 1) is the 
peak element as it is greater than 
its only neighbour element 3.

Expected Time Complexity: O(log N)
Expected Auxiliary Space: O(1)

This is a unique problem since we are given an unsorted array and yet we use 
binary search to solve. We calculate mid and check if mid is the peak element.
If its leftmost element is bigger, then a peak must lie in left half.
If its rightmost element is bigger, then a peak must lie in right half.
*/

int peakElement(int arr[], int n)
{
    int low=0, high=n-1;
    while(low<=high) {
        int mid = low+(high-low)/2;
        if((mid==0 || arr[mid-1] <= arr[mid]) && (mid==n-1 || arr[mid+1] <= arr[mid]))
            return mid;
        else if(mid>0 && arr[mid-1]>arr[mid])
            high = mid-1;
        else
            low = mid+1;
   }
   return -1;
}
