/*
Given a sorted array arr[] of distinct integers. Sort the array into a 
wave-like array and return it. In other words, arrange the elements into a 
sequence such that a1 >= a2 <= a3 >= a4 <= a5..... (considering the increasing 
lexicographical order).

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Input:
2
5
1 2 3 4 5
6
2 4 7 8 9 10

Output:
2 1 4 3 5
4 2 8 7 10 9
*/

void convertToWave(int *arr, int n){
    
    // Your code here
    for(int i = 1; i < n; i+=2){
        swap(arr[i], arr[i-1]);
    }
}