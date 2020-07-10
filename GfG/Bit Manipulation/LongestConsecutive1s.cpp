/*
We need to find the longest length of consecutive 1's i the binary number.
For e.g. binary of 14 (1 1 1 0) has longest consecutive 1's = 3.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T < 105
1 <= N <= 106

Example:
Input:
2
14
222

Output:
3 
4

The approach is to AND a with x<<1. Left shifting x by 1 and then ANDing it to 
itself removes the trailing length of 1, and eventually it gets 0.
So the n. of times loop runs is the no. of times we removed longest 
consecutive 1's.
*/

int maxConsecutiveOnes(int x)
{
 
    // Your code here
    int count = 0;
    while(x != 0){
        x = (x&(x<<1));
        count+=1;
    }
    return count;
}