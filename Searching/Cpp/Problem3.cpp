/*
Given an array arr[] of N positive integers, where elements are 
consecutive (sorted). Also, there is a single element which is repeating X 
(any variable) number of times. Now, the task is to find the element which is 
repeated and number of times it is repeated.

Input:
N = 5
arr[] = {1,2,3,3,4}
Output: 3 2
Explanation: In the given array, 3 is 
occuring two times.

Input:
N = 5
arr[] = {2,3,4,5,5}
Output: 5 2
Explanation: In the given array, 5 is 
occuring two times.

Expected Time Complexity : O(logN)
Expected Auxilliary Space : O(1)
*/

pair<int, int> findRepeating(int *arr, int n){
    // Finding repeating element
    pair<int, int> ans;
    int slow = 0, fast = 0;
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while(slow!=fast);
    ans.first = slow;
    // Calculating how many times it has repeated
    ans.second = n - (arr[n-1] - arr[0]);
    // Diff between consecutive elements is 1
    return ans;
}
