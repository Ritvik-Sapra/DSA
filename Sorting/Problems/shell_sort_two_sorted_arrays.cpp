/*
Given two sorted arrays arr1[] and arr2[] of sizes N and M in non-decreasing 
order. Merge them in sorted order without using any extra space. Modify arr1 so 
that it contains the first N elements and modify arr2 so that it contains the 
last M elements. 

Input: 
N = 4, arr1[] = [1 3 5 7] 
M = 5, arr2[] = [0 2 6 8 9]
Output: 
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]
Explanation: After merging the two 
non-decreasing arrays, we get, 
0 1 2 3 5 6 7 8 9.

Input: 
N = 2, arr1[] = [10, 12] 
M = 3, arr2[] = [5 18 20]
Output: 
arr1[] = [5 10]
arr2[] = [12 18 20]
Explanation: After merging two sorted arrays 
we get 5 10 12 18 20.

Expected Time Complexity:  O((n+m) log(n+m))
Expected Auxilliary Space: O(1)

The solution and approach is based on shell sort.
*/

int nextGap(int gap) {
    if(gap<=1)
        return 0;
    return (gap/2) + (gap%2);
}

void merge(int arr1[], int arr2[], int n, int m) 
{ 
    // code here 
    int i, j, gap = n+m;
    for(gap = nextGap(gap); gap > 0; gap = nextGap(gap)) {
        for(i = 0; i+gap < n; i++) {
            if(arr1[i] > arr1[i+gap])
                swap(arr1[i], arr1[i+gap]);
        }
        for(j = gap > n ? gap - n: 0; i<n && j<m; i++, j++) {
            if(arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
        }
        if(j < m) {
            for(j = 0; j+gap < m; j++) {
                if(arr2[j] > arr2[j+gap])
                    swap(arr2[j], arr2[j+gap]);
            }
        }
    }
}
