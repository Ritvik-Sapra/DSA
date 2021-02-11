/*
Given an array A of N positive numbers. The task is to find the first Equilibium 
Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before
it is equal to the sum of elements after it.

Input:
N = 1
A[] = {1}
Output: 1
Explanation: Since its the only 
element hence its the only equilibrium 
point. 

Input:
N = 5
A[] = {1,3,5,2,2}
Output: 3
Explanation: For second test case 
equilibrium point is at position 3 
as elements before it (1+3) = 
elements after it (2+2).

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

int equilibriumPoint(long long a[], int n) {
    if(n == 1)
        return 1;
    else {
        int left = 0, right = n - 1;
        int left_sum = a[left], right_sum = a[right];
        while(left < right) {
            if(left_sum == right_sum) {
                if(left+1 == right-1)
                    return left+2;
                else {
                    left++; right--;
                    left_sum += a[left];
                    right_sum += a[right];
                }
            }
            else if(left_sum < right_sum) {
                left++;
                left_sum += a[left];
            }
            else {
                right--;
                right_sum += a[right];
            }
        }
        return -1;
    }
}
