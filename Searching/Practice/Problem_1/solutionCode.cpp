/*
Given a binary sorted non-increasing array of 1s and 0s. You need to print the 
count of 1s in the binary array.

Input:
N = 8
arr[] = {1,1,1,1,1,0,0,0}
Output: 5
Explanation: Number of 1's in given 
binary array : 1 1 1 1 1 0 0 0 is 5.

Input:
N = 8
arr[] = {1,1,0,0,0,0,0,0}
Output: 2
Explanation: Number of 1's in given 
binary array : 1 1 0 0 0 0 0 0 is 2.

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).

HINT: The trick is to find the last occurence index of 1, because we know the 
first occurence index is 0.
*/

int countOnes(int arr[], int N)
{
    int l=0, r=N-1, flag=0;
    while(l<=r) {
        int m = l+(r-l) / 2;
        if(arr[m] == 0)
            r = m-1;
        else {
            if(m == N-1 || arr[m+1] != 1)
                { return m+1; }
            else
                l = m+1;
        }
    }
    return 0;
    
}
