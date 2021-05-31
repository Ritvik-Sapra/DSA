/*
Given two arrays X and Y of positive integers, find the number of pairs such 
that xy > yx (raised to power of) where x is an element from X and y is an 
element from Y.

Similar problem: count_inversions.cpp. The logic is based on the 
count_and_merge() of the file.

Input: 
M = 3, X[] = [2 1 6] 
N = 2, Y[] = [1 5]
Output: 3
Explanation: 
The pairs which follow xy > yx are 
as such: 21 > 12,  25 > 52 and 61 > 16 .

Input: 
M = 4, X[] = [2 3 4 5]
N = 3, Y[] = [1 2 3]
Output: 5
Explanation: 
The pairs for the given input are 
21 > 12 , 31 > 13 , 32 > 23 , 41 > 14 , 
51 > 15 .

NOTE: It is strongly recommended to try and solve this problem yourself, before 
looking at the hints.

Hint 1: 
The trick to this question is if y > x, then then x^y > y^x with some exceptions.
Simply sort the array Y[], and for every element x in X[], find the index idx of 
smallest number just greater than x in Y[]. 
All the elements after, this index idx satisfy the above relation. 
So add (n - idx) to the ans.
But there are some exceptions. Try to think of these exceptions.

Hint 2:
Following are the exceptions :
-> if x = 0, then count for this is 0.
-> if x = 1, then count is total no of 0s in Y[] only.
-> if x = 2, for y = 3, y = 4, the above property does not hold, and the count 
should be decreased
-> if x = 3, the count need to be inreased
This is the complete solution.
The overall time complexity is O(nlong + mlogn)
*/

long long count(int x, int Y[], int n, int NoOfY[]) {
    long long ans=0;
    if(x==0)
        return 0;
    if(x==1)
        return NoOfY[0];
    /* upper_bound returns the address of first element greater than x
    That is why we have idx as a pointer to capture address.
    We find the address of element just greater than or equal to x */
    int* idx = upper_bound(Y, Y+n, x);
    /* All the elements smaller than or equal to this address will satisfy our
    condition. That is why we subtract this address from the last add. of Y */
    ans += ((Y+n)-idx) + (NoOfY[0] + NoOfY[1]);
    // Meeting the corner cases, i.e. if x = 2 then for only y = 3 & 4, x^y < y^x
    if(x==2)
        ans -= NoOfY[3] + NoOfY[4];
    // If x = 3, then the condition is satisfied for y = 2 also, even when 2 < 3
    else if(x == 3)
        ans += NoOfY[2];
    return ans;
}

long long countPairs(int X[], int Y[], int m, int n)
{
    int NoOfY[5] = {0};
    //Sorting the array Y
    sort(Y, Y+n);
    //Calculating the count of 0, 1, 2, 3, 4 in Y
    for(int i = 0; i < n; i++) {
        if(Y[i] > 5)
            break;
        NoOfY[Y[i]]++;
    }
    // 'pair' is our final ans to be returned
    long long pair=0;
    for(int i = 0; i < m; i++)
        pair += count(X[i], Y, n, NoOfY);
    return pair;
}
