/*
Given an array arr[] of N positive integers and a number K. The task is to find 
the kth smallest element in the array.

Input: 
N = 5, K = 3
arr[] = {3,5,4,2,9}

Output: 
4

Explanation: 
Third smallest element in the array is 4.

Input:
N = 5, k = 5
arr[] = {4,3,7,6,5}

Output: 
7

Explanation: 
Fifth smallest element in the array is 7.
*/

int lomuto_partition(int arr[], int l, int r) {
    int pivot=arr[r], i=l-1;
    for(int j=l;j<r;j++) {
        if(arr[j]<pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[r]);
    return i+1;
}

int kthSmallest(int arr[], int n, int k){
    // Your code here
    int l=0, r=n-1;
    while(l<=r) {
        int p = lomuto_partition(arr, l, r);
        if(p==k-1)
            return arr[p];
        else if(p < k-1)
            l=p+1;
        else
            r=p-1;
    }
    return -1;
}
