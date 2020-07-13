/*
The problem is to find the minimum adjacent difference in the given array elements.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Input:
3
7
8 -8 9 -9 10 -11 12
8
10 -3 -4 7 6 5 -4 -1
8
-1 40 -14 7 6 5 -4 -1

Output:
4
1
0
*/

// Function to find minimum adjacent difference
// arr[]: input array
// n: size of array
int minAdjDiff(int arr[], int n){    
    // Your code here
    int res = abs(arr[1] - arr[0]), diff;
    for(int i = 2; i<=n; i++){
        if(i==n){
            diff = abs((arr[i-1] - arr[0]));
        }
        else
            diff = abs((arr[i] - arr[i-1]));
        if(diff<res)
            res = diff;
    }
    return res;
}