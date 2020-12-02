/*
Given an array arr[] of size N where every element is in the range from 0 to n-1.
Rearrange the given array so that arr[i] becomes arr[arr[i]].

Input:
N = 2
arr[] = {1,0}
Output: 0 1
Explanation: 
arr[arr[0]] = arr[1] = 0.
arr[arr[1]] = arr[0] = 1.

Input:
N = 5
arr[] = {4,0,2,1,3}
Output: 3 4 2 0 1
Explanation: 
arr[arr[0]] = arr[4] = 3.
arr[arr[1]] = arr[0] = 4.
and so on.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

We want to save the new no. at the required index while also not losing the old
valu. Try to think of a concept that can help us in doing this.

We use the concept of: 
Dividend = Divisor*Quotient + Remainder
where,
Divident is the no. stored at the i-th index
Divisor is our n since 0 <= arr[i] < n. It will be the largest among all
Quotent is our new value
Remainder is our old value

No try to do implement this.
*/

void arrange(long long arr[], int n) {
    // Loop 1
    for(int i = 0; i < n; i++)
        arr[i] += n*(arr[arr[i]]%n);
    // Loop 2
    for(int i = 0; i < n; i++)
        arr[i] /= n;
}
