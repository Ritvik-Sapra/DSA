/*
Expected Time Complexity: O(1).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ T ≤ 200
1 ≤ N ≤ 109
0 ≤ K ≤ floor(log2(N) + 1)

Example:
Input:
3
4
0
4
2
500
3

Output:
No
Yes
No
*/

/*
The first approach is to take 1 and left shit it to the K-th position. 
Then AND it with the K-th bit of n.
*/
bool checkKthBit(int n, int k){
    
    // Your code here
    // It can be a one liner logic!! Think of it!!
    if((n&(1<<k)) != 0)
        return true;
    else
        return false;
}

/*
Alternatively, we can take the K-th bit of n, and right shift it to 0th 
position, where 1 s in the number 1. To do this, we simply right shift
the number n by K positions and AND it with 1. Both solutions are appropriate.
*/
bool checkKthBit(int n, int k){
    
    // Your code here
    // It can be a one liner logic!! Think of it!!
    if(((n>>k)&1) != 0)
        return true;
    else
        return false;
}