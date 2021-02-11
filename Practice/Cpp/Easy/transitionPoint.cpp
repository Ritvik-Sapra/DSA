/*
Given a sorted array containing only 0s and 1s, find the transition point. 

Input:
N = 5
arr[] = {0,0,0,1,1}
Output: 3
Explanation: index 3 is the transition 
point where 1 begins.

Input:
N = 4
arr[] = {0,0,0,0}
Output: -1
Explanation: Since, there is no "1",
the answer is -1.

Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(1)
*/

// Solution 1: Correct but Naive solution
int transitionPoint(int arr[], int n) {
    // code here
    bool found = false;
    int idx;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            idx = i;
            found = true;
            break;
        }
    }
    if(found)
        return idx;
    return -1;
}

// Solution 2: Better solution (using binary search to find first occ of 1)
int transitionPoint(int arr[], int n) {
    int low = 0, high = n - 1;
    if(n == 1) {    // Corner case
        if(arr[0] == 1)
            return 0;
        else
            return -1;
    }
    while(low <= high) {
        int mid = low + (high - low) / 2;   // For handling large values
        if(arr[mid] != 1)
            low = mid + 1;
        else {
            if((mid == 0) || (arr[mid - 1] != 1))
                return mid; // Transition point is found
            else
                high = mid - 1;
        }
    }
    return -1;  // If transition point is still not found
}
