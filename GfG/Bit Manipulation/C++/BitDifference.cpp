/*
The task is to determine how many bits should be flipped, so that
number a becomes number b 
(a and b are passed in the function "int countBitsFlip()").

Expected Time Complexity: O(log N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ T ≤ 105
1 ≤ A, B ≤ 106

Example:
Input:
2
10 20
20 25
Output:
4
3
*/

//The logic is to do a xor b, and then count no. of set bits.

//Counting no. of set bits using Brian Kerningam's algorithm
int countSetBits(int n){ 
    int res = 0;
    while(n > 0){
        n = (n&(n-1));
        res++;
    }
    return res;
}

//Function to calculate bit difference
int countBitsFlip(int a, int b){
    
    // Your logic here
    return(countSetBits(a^b));
}