/*
Given an array of N elements and a number K. The task is to arrange array 
elements according to the absolute difference with K, i. e., element having 
minimum difference comes first and so on.
Note : If two or more elements are at equal distance arrange them in same 
sequence as in the given array.

Input: N = 5, K = 7
arr[] = {10, 5, 3, 9, 2}
Output: 5 9 10 3 2
Explanation: Sorting the numbers accoding to 
the absolute difference with 7, we have 
array elements as 5, 9, 10, 3, 2.

Input: N = 5, K = 6
arr[] = {1, 2, 3, 4, 5}
Output: 5 4 3 2 1
Explanation: Sorting the numbers according to 
the absolute difference with 6, we have array 
elements as 5 4 3 2 1.
*/

int K;
bool mycomparator(int a, int b) {
    return abs(a-K) < abs(b-K);
}
void sortABS(int A[],int N, int k)
{
   //Your code here
   K=k;
   stable_sort(A, A+N, mycomparator);
}
