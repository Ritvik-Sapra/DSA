/*
A sparse number is, in which no two or more consequtive binary digits is 1.
For e.g., 2 is a sparse no (0 1 0), while 3 is not (0 1 1).
The function return true and hence prints 1 if no. is sparse, else it returns
false and prints 0 if the number is not sparse.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 105
1 <= N <= 106

Example:
Input:
2
2
3

Output:
1
0

The idea is to AND the no. n with "rightShifted_n". 
"rightShifted_n" is n shifted to right (>>) by 1.
If the no. is sparse, AND result will be 0, else it will non 0.
*/

bool isSparse(int n){
    
    // Your code
    unsigned int rightShifted_n = n>>1;
    if((n&rightShifted_n) == 0){
        return true;
    }
    else
        return false;
}