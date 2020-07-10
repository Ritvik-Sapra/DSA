/*
The Task is to find the right most set bit in the binary representation of a 
given number 'n'. For e.g. number 5 in binary is: 0 1 0 1. Therefore, 
the right most set bit is on position 1. 
We have to return 1. If the number is zero, return 0.

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= T <= 200
0 <= N <= 106

Example:
Input:
3
18
12
0

Output:
2
3
0
*/

unsigned int getFirstSetBit(int n){
    
    // Your code here
    unsigned int pos = 0, k =1;

    if(n == 0){
        return pos;
    }
    
    while(n > 0){
        pos+=1;
        if((k & n) == 1){
            return pos;
        }
        else{
            n = (n>>1);
        }
    }
    //return 0;
}