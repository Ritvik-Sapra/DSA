/*
Also called Leaders in an Array.
Given an unsorted array. The task is to find all the star and super star elements
in the array. Star are those elements which are strictly greater than all the 
elements on its right side. Super star are those elements which are strictly 
greater than all the elements on its left and right side.

Note: Assume first element (A[0]) is greater than all the elements on its left 
side, And last element (A[n-1]) is greater than all the elements on its right side.

Input:
The first line of input contains an integer T denoting the number of test cases.
Then T test cases follow. Each test case consists of two lines. First line of 
each test case contains an Integer N denoting size of array and the second line 
contains N space separated elements.

Output:
For each test case, print the space separated star elements and then in new 
line print super star elements. If no super star element present in array then 
print "-1".

Constraints:
1<=T<=200
1<=N<=106
1<=A[i]<=106

Example:
Input:
2
6
4 2 5 7 2 1
3
8 6 5

Output:
7 2 1
7
8 6 5
8

Input:
2
10
1 6 5 4 7 8 4 3 2 1
9
1 2 10 3 4 5 8 10 4

Output:
8 4 3 2 1 
8
10 4 
-1
*/

#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i < n; i++) {
	        cin>>arr[i];
	    }
	    //cout<<"input taken correctly"<<endl;
	    int leader[n];
	    int size = 0;
	    leader[0] = arr[n-1];
	    for(int i = n-2; i >= 0; i--) {
	        if(arr[i] > leader[size]) {
	            size += 1;
	            leader[size] = arr[i];
	        } 
	    }
	    size++; // Total size of 'leader' array
	    int superstar = leader[0];
        // Greatest element in 'leader' array will be superstar
	    for(int i = 1; i < size; i++) {
	        if(leader[i] > superstar)
	            superstar = leader[i];
	    }
        // Check if there is only one super star, i.e. its the only largest element
        // Alternatively, we could have simply found the greatest element in the array
	    int count = 0;
	    for(int i = 0; i < n; i++) {
	        if(arr[i] == superstar)
	            count += 1;
	    }
	    if(count > 1)
	        superstar = -1;
        // Printing 'leader' array in reverse for output to be correct
	    for(int i = size-1; i >= 0; i--)
	        cout<<leader[i]<<" ";
	    cout<<"\n"<<superstar<<endl;
	}
	return 0;
}
