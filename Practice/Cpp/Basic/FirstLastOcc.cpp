/*
Given a sorted array with possibly duplicate elements, the task is to find 
indexes of first and last occurrences of an element x in the given array.

Note: If the number x is not found in the array just print '-1'.

Input:
The first line consists of an integer T i.e number of test cases. The first 
line of each test case contains two integers n and x. The second line contains 
n spaced integers.

Output:
Print index of the first and last occurrences of the number x with a space 
in between.

Constraints: 
1<=T<=100
1<=n,a[i]<=1000

Example:
Input:
2
9 5
1 3 5 5 5 5 67 123 125
9 7
1 3 5 5 5 5 7 123 125

Output:
2 5
6 6
*/

#include<iostream>
using namespace std;

int lastOcc(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] < x)
            low = mid + 1;
        else if(arr[mid] > x)
            high = mid - 1;
        else {
            if((mid == n-1) || (arr[mid+1] != x))
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}

int firstOcc(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] < x)
            low = mid + 1;
        else if(arr[mid] > x)
            high = mid - 1;
        else {
            if((mid == 0) || (arr[mid-1] != x))
                return mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--) {
	    int n, x;
	    cin>>n>>x;
	    int arr[n];
	    for(int i = 0; i < n; i++)
	        cin>>arr[i];
	    int f, l;
	    f = firstOcc(arr, n, x);
	    if(f != -1){
	        l = lastOcc(arr, n, x);
	        cout<<f<<" "<<l<<endl;
	    }
	    else
	        cout<<f<<endl;
	}
	return 0;
}
