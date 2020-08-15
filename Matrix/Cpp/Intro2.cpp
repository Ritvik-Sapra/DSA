/*
This is another introduction to matrix which will solidify understanding and
working with matrix as a data structure. For a given matrix, we need to traverse
along the boundary of the matrix.
For e.g. if the input is:
1 2 3 4
5 6 7 8
9 10 11 12

Then the output should be:
1 2 3 4 8 12 11 10 9 5 1

NOTE: This program is also available in Java.
*/

#include <iostream>
#include <vector>
using namespace std;
// Function to traverse along boundary of matrix
void boundary_traversal(vector<vector< int>> &arr) {
    if(arr.size() == 1) { // Corner case 1: when input has only 1 row
        for(int i = 0; i < arr[0].size(); i++)
            cout<<arr[0][i]<<" ";
    }
    else if(arr[0].size() == 1){ // Corner case 2: when input has only 1 column
        for(int i = 0; i < arr.size(); i++)
            cout<<arr[i][0]<<" ";
    }
    else {
        // Printing upper boundary
        for(int i = 0; i < arr[0].size(); i++)
            cout<<arr[0][i]<<" ";
        // Printing right boundary
        for(int i = 1; i < arr.size(); i++)
            cout<<arr[i][arr[i].size() - 1]<<" ";
        // Printing lower boundary
        for(int i = arr[arr.size() - 1].size() - 2; i >= 0; i--)
            cout<<arr[arr.size() - 1][i]<<" ";
        for(int i = arr.size() - 2; i >= 0; i--)
            cout<<arr[i][0]<<" ";
    }
}
int main() {
	int r, c;
	cin>>r>>c;
	vector<vector<int>> arr; // Declaring a vector of vectors
	for(int i = 0; i < r; i++) {
	    vector<int> v; // Creating a vector for every row
	    int ip;
	    for(int j = 0; j < c; j++) {
	        cin>>ip;
	        v.push_back(ip);
	    }
	    arr.push_back(v);
	}
	boundary_traversal(arr);
	return 0;
}