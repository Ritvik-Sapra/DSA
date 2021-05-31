/*

This program illustrates binary search.

NOTE: A corresponding file called BinaryRecursive is present in the Java folder
(../Java/BinaryRecursive.java). It illustrates binary search through recursion.

*/

#include <iostream>
#include <vector>

using namespace std;

int bin_search(vector<int> &arr, int x) {
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end) {
        int mid = (start + end)/2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}
int main() {
	vector<int> arr;
	int n, x;
	cin>>n>>x; // Size of array >> element to be searched
	for(int i = 0; i < n; i++){ // Inputting array
	    int ip;
	    cin>>ip;
	    arr.push_back(ip);
	}
	int search_result = bin_search(arr, x); // Function call
	cout<<search_result;
	return 0;
}