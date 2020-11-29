/*
Shell sort is a more generalised version of Insertion sort. It is mostly used
in areas where memory is less available. We consider elements at a given gap.
Check out this similar problem: shell_sort_two_sorted_arrays.cpp
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void shell_sort(vector<int> &arr) {
    int n = arr.size();
    for(int gap = n/2; gap > 0; gap /= 2) {
        for(int i = gap; i < n; i++) {
            int temp = arr[i], j;
            for(j = i; j>=gap && arr[j-gap] > temp; j -= gap)
                arr[j] = arr[j-gap];
            arr[j] = temp;
        }
    }
}

int main() {
	vector<int> arr;
	int ip;
	while(cin>>ip)
	    arr.push_back(ip);
	shell_sort(arr);
	for(int i = 0; i < arr.size(); i++)
	    cout<<arr[i]<<" ";
	return 0;
}
