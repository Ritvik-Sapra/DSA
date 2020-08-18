/*
This program illustrates spiral traversal of a matrix.

input 1:
4 4 // Row and column respectively
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

output 1:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to print spiral traversal of a matrix
void print_spiral(vector<vector<int>> &arr) {
    int top = 0;
    int right = arr[0].size() - 1;
    int left = 0;
    int bottom = arr.size() - 1;
    while((top <= bottom) && (left <= right)) { // Works well for square matrix
        for(int i = left; i <= right; i++) {
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int i = top; i <= bottom; i++) {
            cout<<arr[i][right]<<" ";
        }
        right--;
        for(int i = right; i >= left; i--) {
            cout<<arr[bottom][i]<<" ";
        }
        bottom--;
        for(int i = bottom; i >= top; i--) {
            cout<<arr[i][left]<<" ";
        }
        left++;
    }
}
int main() {
	int m, n;
	vector<vector<int>> arr;
	cin>>m>>n; // Row>>Column
    // Inputting matrix using 2D vectors
	for(int i = 0; i < m; i++) {
	    vector<int> v;
	    int ip;
	    for(int j = 0; j < n; j++) {
	        cin>>ip;
	        v.push_back(ip);
	    }
	    arr.push_back(v);
	}
	print_spiral(arr);
	return 0;
}