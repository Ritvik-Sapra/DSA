/*
Given an array of 0s, 1s, and 2s. Arrange the array elements such that all 0s 
come first, followed by all the 1s and then, all the 2s.
This is an example of three way partitioning.
Note: Do not use the inbuilt sort function.

Input: N = 5, arr[] = {0, 2, 1, 2, 0}
Output: 0 0 1 2 2

Input: N = 3, arr[] = {0, 1, 0}
Output: 0 0 1
*/

void segragate012(int arr[], int N)
{
    // Your Code Here
    int low=0, high=N-1;
    for(int mid=0; mid<=high; ) {
        switch(arr[mid]) {
            case 0: swap(arr[mid], arr[low]);
            mid++; low++; break;
            case 1: mid++; break;
            case 2: swap(arr[mid], arr[high]);
            high--; break;
        }
    }
}
