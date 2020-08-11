/*
Given an array of positive integers. Your task is to find the leaders in the
array.

Note: An element of array is leader if it is greater than or equal to all the
elements to its right side. Also, the rightmost element is always a leader. 

Example:
Input:
3
6
16 17 4 3 5 2
5
1 2 3 4 0
5
7 4 5 7 3
Output:
17 5 2
4 0
7 7 3
*/

#include<iostream>
#include<bits/stdc++.h> // For vectors in C++
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	for(unsigned int j = 0; j < t; j++) {
	    int n;
	    cin>>n;
	    int arr[n];
	    for(unsigned int i = 0; i < n; i++){
	        cin>>arr[i];
	    }
        vector<int> v;  //Vector to store all leaders
        int ldr = arr[n-1];
        v.push_back(ldr);
        for(int i = n-2; i >= 0; i--) {        //Finding leaders in the array
            if(ldr<=arr[i]){
                ldr = arr[i];
                v.push_back(ldr);
            }
        }
        // Printing vector in reverse order to match o/p format
        for(int i = v.size() - 1; i >= 0; i--)
            cout<<v[i]<<" ";
        cout<<endl;
	}
	return 0;
}