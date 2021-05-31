/*
Given a sorted array A of size N, delete all the duplicates elements from A.

You dont need to read input or print anything. Complete the function 
remove_duplicate() which takes the array A[] and its size N as input parameters 
and modifies it in place to delete all the duplicates. The function must return 
an integer X denoting the new modified size of the array. 

Note: The generated output will print all the elements of the modified array 
from index 0 to X-1.

The function returns the size of the new array (after removing duplicates).

Input:
N = 5
Array = {2, 2, 2, 2, 2}
Output: 2
Explanation: After removing all the duplicates 
only one instance of 2 will remain.

Input:
N = 3
Array = {1, 2, 2}
Output: 1 2 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int i, j;
        if(n==0 || n==1)
            return n;
        for(i = 0; i < n-1; i++)
            if(a[i]!=a[i+1])
                a[j++] = a[i];
        a[j++] = a[n-1];
        return j;
    }
};
