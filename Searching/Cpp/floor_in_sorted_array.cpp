/*
Given a sorted array arr[] of size N without duplicates, and given a value x. 
Floor of x is defined as the largest element K in arr[] such that K is smaller 
than or equal to x. Find the index of K(0-based indexing).

Similar problem: square_root.cpp

Input:
N = 7, x = 0 
arr[] = {1,2,8,10,11,12,19}
Output: -1
Explanation: No element less 
than 0 is found. So output 
is "-1".

Input:
N = 7, x = 5 
arr[] = {1,2,8,10,11,12,19}
Output: 1
Explanation: Largest Number less than 5 is
2 (i.e K = 2), whose index is 1(0-based 
indexing).

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).
*/

int findFloor(vector<long long> v, long long n, long long x){
    long long low = 0, high = n-1, ans = -1;
    while(low<=high) {
        long long mid = low+(high-low)/2;
        if(v[mid] == x)
            return mid;
        else if(v[mid] > x)
            high = mid-1;
        else {
            low = mid+1;
            ans = mid;
        }
    }
    return ans;
}
