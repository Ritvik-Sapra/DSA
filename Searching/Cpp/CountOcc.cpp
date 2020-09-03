/*
This program counts the no. of times an element has occured in a sorted array.

Input 1:
6   <-- size of array
1 1 1 1 1 1 <-- elements of array
1   <-- element to be counted

Output 1:
6   <-- no. of time the given element has occured in the array

Input 2:
5
1 2 3 4 5
7

Output 2:
-1  <-- signifies not found
*/

#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr, int x) {
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end) {
        int mid = ((start+end)/2);
        if(x < arr[mid])
            end = mid - 1;
        else if(x > arr[mid])
            start = mid + 1;
        else {
            if((mid == 0) || (arr[mid - 1] != arr[mid]))
                return mid;
            else
                end = mid - 1; 
        }
    }
    return -1;
}

int lastOcc(vector<int> arr, int x) {
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end) {
        int mid = ((start+end)/2);
        if(x < arr[mid])
            end = mid - 1;
        else if(x > arr[mid]) 
            start = mid + 1;
        else {
            if((mid == arr.size()-1) || (arr[mid+1] != arr[mid]))
                return mid;
            else
                start = mid + 1;
        }
    }
    return -1;
}

int countOcc(vector<int> arr, int x) {  // Functin to count occurences
    int first = firstOcc(arr, x);
    if(first == -1)
        return -1;
    else {
        int last = lastOcc(arr, x);
        return ((last-first) + 1);
    }
}

int main() {
	int size, x, ip;
	vector<int> arr;
	cin>>size;
	for(int i = 0; i < size; i++) {
	    cin>>ip;
	    arr.push_back(ip);
	}
	cin>>x;
	int count = countOcc(arr, x);
	cout<<count<<endl;
	return 0;
}