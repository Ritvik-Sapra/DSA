/*
Given an unsorted array A of size N that contains only non-negative integers, 
find a continuous sub-array which adds to a given number S.

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.

Input:
N = 10, S = 15
A[] = {1,2,3,4,5,6,7,8,9,10}
Output: 1 5
Explanation: The sum of elements 
from 1st position to 5th position
is 15.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/

vector<int> subarraySum(int arr[], int n, int s){
    vector<int> ans;
    int left = 0, right = 1;
    int currsum = arr[left];
    bool found = false;
    if(n == 1) {
        if(arr[0] == s) {
            found = true;
            ans.push_back(1);
            ans.push_back(1);
        }
        else
            ans.push_back(-1);
    }
    else {
        for(int i = 1; i < n; i++) {
            currsum += arr[right];
            if(currsum < s)
                right++;
            else {
                while((currsum > s) && (left < right)) {
                    currsum -= arr[left];
                    left++;
                }
                if(currsum == s) {
                    found = true;
                    break;
                }
                else
                    right++;
            }
        }
        if(found) {
            ans.push_back(left+1);
            ans.push_back(right+1);    
        }
        else
            ans.push_back(-1);
    }
    return ans;
}
