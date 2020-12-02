/*
Given an integer array representing the heights of N buildings, the task is to 
delete N-2 buildings such that the water that can be trapped between the
 remaining two building is maximum.
Note: The total water trapped between two buildings is gap between them 
(number of buildings removed) multiplied by height of the smaller building.

Input:
N = 6
height[] = {2,1,3,4,6,5}
Output: 8
Explanation: The heights are 2 1 3 4 6 5.
So we choose the following buildings
2 1 3 4 6 5  and remove others. So total
removed buildings is equal to 4, now the
height of smaller one is 2. So answer is
2 * removed buildings = 2*4 = 8. There is
no answer greater than this.

Input:
N = 2
height[] = {2,1}
Output: 0
Explanation: The heights are 2 1. So we
choose the following buildings 2 5  and
remove others. But there is no other 
buildings to be removed so total removed
= 0.  Now the height of smaller one is 2.
So answer is 2 * removed buildings = 2*0
= 0.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/

int maxWater(int height[], int n) 
{ 
    /* Using two-pointer approach, we maintain two iterators, i & j starting
    from front and last    */
    int i = 0, j = n-1;
    int res = (j-i-1)*(min(height[i], height[j]));
    while(i<j) {
        int curr = (j-1-i)*min(height[i], height[j]);
        res = max(res, curr);
        if(height[i] < height[j])
            i++;
        else
            j--;
    }
    return res;
}
