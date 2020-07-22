/*
We have to print the right most different bit of numbers m and n.
We use XOR between m and n and then find their rightmost bit.
Constraints:
1 <= T <= 100
1 <= M <= 103
1 <= N <= 103

Example:
Input:
2
11 9
52 4

Output:
2
5
*/

/*
Expected Time Complexity: O(max(log m, log n)).
Expected Auxiliary Space: O(1).
*/
#include <bits/stdc++.h>

using namespace std;

int getRightMostSetBit(int n)  //Function to find rightmost bit
{
    return log2(n & -n) + 1; //finding the rightmost set bit of a number
}

int posOfRightMostDiffBit(int m, int n)
{
    if(m==n)
    return -1; //if numbers are same then they have same bits
    
    return getRightMostSetBit(m ^ n); 
    /*xor the numbers and find their rightmost set bit.
    xor only sets the dissimilar bits and unsets similar bits*/
}