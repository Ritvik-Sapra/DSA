/*
Given a sorted array of positive integers (elements may be repeated) 
and a number x. The task is to find the leftmost index of x in the given array.

Input:
N = 10
arr[] = {1,1,2,2,3,4,5,5,6,7}
X = 1
Output: 0
Explanation: 1 is present two times
in the array and its leftmost index 
is 0.

Input:
N = 7
arr[] = {10,20,20,20,20,20,20}
X = 20
Output: 1
Explanation: 20 is present 5 time, 
but its leftmost index is 1.

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).
*/

int leftIndex(int N, int arr[], int X){
    /*
    We need to find the first occurence of X
    This problem can also be solved with recursion, but it may cost 
    unnecessary extra space due to recursion calls. Iterative solution
    is preffered over recursive solution.
    */
    int l=0, r=N-1;
    while(l<=r) {
        int m = l+(r-l)/2;
        if(arr[m] < X)
            l = m+1;
        else if(arr[m] > X)
            r = m-1;
        else {
            if(m==0 || arr[m-1] != X)
                return m;
            else
                r = m-1;
        }
    }
    return -1;
}
