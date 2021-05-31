/*
The task is to count the total no. of set bits in a given range: 1 to n.
1 and n both are inclusive.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ T ≤ 105
1 ≤ N ≤ 106

Example:
Input:
2
4
17
Output:
5
35

NOTE: Due to extremly low Time and Space complexity, we try to see a pattern,
i.e. how many times 0,1 pattern repeats and how many 0,0,1,1 pattern repeats.
To understand better, write binary rep. from 0 to 4.
0 0 0 => 0
0 0 1 => 1
0 1 0 => 2
0 1 1 => 3
1 0 0 => 4
Notice how patterns are repeated. That is the algo
*/

int countSetBits(int n)
{
    n++;
    int count=0;
    
    for( int x=2 ; x/2<n ; x=x*2 )
    {
        int quotient = n/x;
        count += quotient * x / 2;
        
        int remainder = n%x;
        if(remainder > x/2)
            count += remainder - x/2;
    }
    
    return count;
}