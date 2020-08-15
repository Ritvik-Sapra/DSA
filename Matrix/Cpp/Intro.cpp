/*
This file is like an introduction to how matrix are coded and handled in C++.
This depicts a simple program which first creates a matrix of sizww m X n
and traverses through that in a "snak pattern". For e.g. if the matrix is:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
The traversal would be:
------->
1 2 3 4 |
<--------
| 5 6 7 8
--------->
9 10 11 12|
<----------
| 13 14 15 16
------------>
So output would be: 1 2 3 4 8 7 6 5 9 10 11 12 16 15 14 13
NOTE: This program is also available in Java.
*/
#include <iostream>
#include <vector>
using namespace std;
// Function to print the matrix in snake pattern
void print_SnakePattern(vector< vector <int>> &arr) {
    for(int i = 0; i < arr.size(); i++) {
        if(i%2 == 0) { // If i is even, print from left to right
            for(int j = 0; j < arr[i].size(); j++)
                cout<<arr[i][j]<<" ";
        }
        else { // If i is odd, print from right to left
            for(int j = arr[i].size() - 1; j >= 0; j--)
                cout<<arr[i][j]<<" ";
        }
    }
}

int main() {
	// Inputting and creating a matrix using vector of vectors method
	vector< vector <int>> arr; // Creating a 2D vector
	int m, n;
	cin>>m>>n;
	for(int i = 0; i < m; i++) {
	    vector<int> v; // Creating 1D vector for each row
	    int ip;
	    for(int j = 0; j < n; j++) {
	        cin>>ip;
	        v.push_back(ip);
	    }
	    arr.push_back(v); // Adding each row into the 2D vector
	}
	print_SnakePattern(arr);
    // Vector of vectors method is very useful when passing to functions
	return 0;
}