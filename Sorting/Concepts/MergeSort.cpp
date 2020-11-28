/*
This program implements Merge sort in C++.
Merge sort has mainly two steps: Dividing the array and merging them.
It is a Divide and conquer algorithm.
It divides the function by recursively calling from left (l) to middle (m),
and then from middle + 1 (m+1) to right (r).
It then finally merges the two divided arrays to form a sorted array.

NOTE: Refer to the file MergingSortedArrays.cpp. The concept is similar.

I/p:
88 15 9 90 79
O/p:
9 15 79 88 90 
*/

#include <iostream>
#include <vector>
using namespace std;

/* Merge function to merge the two arrays.
Similar concept used in MergingSortedArrays.cpp
*/
void merge(vector<int> &arr, int l, int m, int r) {
    int n1 = m-l+1, n2 = r-m, i, j, k;
    int left[n1], right[n2];
    for(i = 0; i < n1; i++)
        left[i] = arr[l+i];
    for(j = 0; j < n2; j++)
        right[j] = arr[m+1+j];
    i = 0, j = 0, k = l;
    while(i<n1 && j<n2) {
        if(left[i] <= right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while(i<n1)
        arr[k++] = left[i++];
    while(j<n2)
        arr[k++] = right[j++];
}

// Merge sort algo
void merge_sort(vector<int> &arr, int l, int r) {   // Passing arr by-referrence
    if(r>l) {   //The array should contain at least two elements
        /* Calculating middle. Such expression is used to avoid overflow in
        large values of l and r.*/
        int m = l+(r-l)/2;
        merge_sort(arr, l, m);  // Recursively calling from left to middle
        merge_sort(arr, m+1, r);    //Recursively calling from middle+1 to right
        merge(arr, l, m, r);    // Merging the divided arrays
    }
}

int main() {
	vector<int> arr;
	int ip;
	while(cin>>ip)
	    arr.push_back(ip);
	merge_sort(arr, 0, arr.size()-1);
	for(int i=0;i<arr.size();i++)
	    cout<<arr[i]<<" ";
	return 0;
}
