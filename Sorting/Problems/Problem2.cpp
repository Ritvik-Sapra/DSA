/*
Given an array arr[](0-based indexing) of N integers which is closer sorted 
(defined below) and an element x. The task is to find the index of element x if 
it is present. If not present, then print -1.
Closer Sorted: The first array is sorted, but after sorting some elements are 
moved to either of the adjacent positions, i.e, maybe to the arr[i+1] or arr[i-1].

Input: N = 5, A[] = [3 2 10 4 40], x = 2
Output: 1
Explanation: 2 is present at index 1 
(0-based indexing) in the given array.

Input: N = 4, A[] = [2 1 4 3], x = 5
Output: -1
Explanation: 
5 is not in the array so the output will be -1.

Expected Time Complexity: O(Log(N)).
Expected Auxiliary Space: O(1).

Hint: Use binary search, but modify it a little bit.
*/

int closer(int arr[],int n, int x)
{
    int low=0, high=n-1;
    // Binary search
    while(low<=high) {
        int mid = low+(high-low)/2;
        if(arr[mid] == x)
            return mid;
        // Check for adjacent positions of mid, but don't run into corner cases
        else if(mid!=0 && arr[mid-1]==x)
            return mid-1;
        // Check for adjacent positions of mid, but don't run into corner cases
        else if(mid!=n-1 && arr[mid+1]==x)
            return mid+1;
        else if(arr[mid] < x)
            low = mid+1;
        else
            high = mid-1;
    }
    // If element is not found
    return -1;
}
