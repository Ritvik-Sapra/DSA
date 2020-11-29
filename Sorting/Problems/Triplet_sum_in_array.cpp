/*
Given an array and an integer K. Find if there's a triplet in the array which 
sums up to the given integer K. 

Input: N = 6, K = 13
arr[] = [1 4 45 6 10 8]
Output: true
Explanation: The triplet {1, 4, 8} in 
the array sums up to 13.

Input: N = 5, K = 10
arr[] = [1 2 4 3 6]
Output: true
Explanation: The triplet {1, 3, 6} in 
the array sums up to 10.

Similar problem: Find_triplets_with_zero_sum_.cpp, Find_no_of_triangles.cpp
*/

bool find3Numbers(int arr[], int N, int X)
{
    //Your Code Here
    sort(arr, arr+N);
    for(int i=0;i<N-2;i++) {
        int l = i+1, r = N-1, key = arr[i];
        while(l<r) {
            if(key+arr[l]+arr[r] == X)
                return true;
            else if(key+arr[l]+arr[r] < X)
                l++;
            else
                r--;
        }
    }
    return false;
}
