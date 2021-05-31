/*
We are given two arrays: L[] and R[]. The corresponding integers of L and R 
represent the range. We have to output the maximum of the element occuring in 
this range. 
NOTE: If more than on element is there, we need to output the smallest one.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Input:
2
4      //Size of array
1 4 3 1     //L[]
15 8 5 4    //R[]
5
1 5 9 13 21
15 8 12 20 30

Output:
4
5

Explanation:
In test case 1; the ranges are:
{1, 15}: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15] 
{4, 8}: [4, 5, 6, 7, 8]
{3, 5}: [3, 4, 5]
{1, 4}: [1, 2, 3, 4]

In all these ranges, 4 is the smallest element that has occured the most.
Hence, o/p is 4.
*/

// L and R are input array
// maxx : maximum in R[]
// n: size of array
// arr[] : declared globally with size equal to maximum in L[] and R[]
int maxOccured(int L[], int R[], int n, int maxx){

    // Your code here
    int arr[maxx+1] = {0};
    for(int i = 0; i < n; i++){
        arr[L[i]]+=1;
        arr[R[i]+1]-=1;
    }
    int msum = arr[0], ind = 0;
    for(int i = 1; i <= maxx; i++){
        arr[i]+=arr[i-1];
        if(msum < arr[i]){
            msum = arr[i];
            ind = i;
        }
    }
    return ind;
}