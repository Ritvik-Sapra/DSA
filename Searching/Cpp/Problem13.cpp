/*
Given an integer x, find the square root of x. If x is not a perfect square, 
then return floor(√x).

Input:
x = 5
Output: 2
Explanation: Since, 5 is not a perfect 
square, floor of square_root of 5 is 2.

Input:
x = 4
Output: 2
Explanation: Since, 4 is a perfect 
square, so its square root is 2.

Expected Time Complexity: O(log N)
Expected Auxiliary Space: O(1)
*/

long long int floorSqrt(long long int x) 
{
    // Your code goes here   
    long long ans=-1, low=1, high=x, mid;
    while(low<=high) {
        mid = low+(high-low)/2;
        long long msqr = mid*mid;
        if(msqr == x)
            return mid;
        else if(msqr > x)
            high = mid-1;
        else {
            low = mid+1;
            ans = mid;
        }
    }
    return ans;
}
