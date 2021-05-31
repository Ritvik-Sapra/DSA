/*
Given an array A of N elements. Find the majority element in the array. 
A majority element in an array A of size N is an element that appears more than 
N/2 times in the array.

Input:
N = 3 
A[] = {1,2,3} 
Output: -1

Explanation: Since, each element in 
{1,2,3} appears only once so there 
is no majority element.

Input:
N = 5 
A[] = {3,1,3,3,2} 
Output: 3
Explanation: Since, 3 is present 
more than N/2 times, so it is 
the majority element.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

HINT: We make use of the Moore's voting algorithm.
The algorithm works in two phases =>
Phase 1) Believes every candidate is a majority element and take the count
Phase 2) Verifies that the above chosen candidate is a majority element or not
*/

int majorityElement(int a[], int size)
{
    // Moore's voting algo
    int res = 0, count = 1;
    // Phase 1
    for(int i = 1; i < size; i++) {
        if(a[res] == a[i])
            count++;
        else
            count--;
        if(count == 0) { res = i; count = 1; }
    }   // We believe that the majority element is present at index res
    // Phase 2
    count = 0;
    for(int i = 0; i < size; i++) {
        if(a[res] == a[i])
            count++;
    }
    if(count <= size/2) // If we have no majority element then return -1
        return -1;
    return a[res];
}
