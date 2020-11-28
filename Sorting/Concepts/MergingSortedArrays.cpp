/*
We are given two sorted arrays, we have to combine/merge them both to make a one
sorted array.

I/p:
6 6             <-- size of the two arrays
1 2 21 22 50 80        <-- Array 1
3 10 15 47 65 90       <-- Array 2
O/p:
1 2 3 10 15 21 22 47 50 65 80 90  
*/

#include <iostream>
#include <vector>
using namespace std;

void Merge_Two_sorted_Arrays(int arr1[], int arr2[], int m, int n) {
    int i=0, j=0;
    while(i<m && j<n) {
        if(arr1[i] < arr2[j])
            cout<<arr1[i++]<<" ";
        else
            cout<<arr2[j++]<<" ";
    }
    while(i<m) { cout<<arr1[i++]<<" "; }
    while(j<n) {cout<<arr2[j++]<<" "; }
}

int main() {
    int m, n;
    cin>>m>>n;
    int arr1[m], arr2[n];
	for(int i=0;i<m;i++)
	    cin>>arr1[i];
	for(int i = 0; i < n; i++)
	    cin>>arr2[i];
	Merge_Two_sorted_Arrays(arr1, arr2, m, n);
	return 0;
}
