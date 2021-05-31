/*
The program illustrates finding the index of the first occurence of an element
in a sorted array using "Recursive Binary Search".

NOTE: Recursive binary search is not preferred. Iterative binary search is much
better due to less memory consumption

Input 1:
6   <-- size f array
1 2 2 2 3 3     <-- array elements
1   <-- element to be searched for

Output 1:
0   <-- Recursive binary search result
0   <-- Iterative binary search result

Input 2:
6
1 2 2 2 3 3
2

Output 2:
1
1

Input 3:
6
1 2 2 2 3 3
3

Output 3:
4
4
*/

#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr, int start, int end, int x) { // Using recursive Binary search
    if (start > end) // Base case
        return -1;
    int mid = ((start+end)/2);
    if(x > arr[mid])
        return firstOcc(arr, mid + 1, end, x);
    else if(x < arr[mid])
        return firstOcc(arr, start, mid - 1, x);
    else {
        if((mid == 0) || (arr[mid - 1] != arr[mid])) 
        // Checking is the element found is the first occurence or if mid is not 0 index
            return mid;
        else
            return firstOcc(arr, start, mid - 1, x);
    }
}

int firstOcc_iterative(vector<int> arr, int x) { // Using iterative Binary Search
    int start = 0;
    int end = arr.size() - 1;
    while(start<=end) {
        int mid = ((start+end)/2);
        if (x < arr[mid])
            end = mid - 1;
        else if (x > arr[mid])
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

int main() {
	int x, size, ip;
	vector<int> arr;
	cin>>size;
	for(int i = 0; i < size; i++) {
	    cin>>ip;
	    arr.push_back(ip);
	}
	cin>>x;
	int index_recursive = firstOcc(arr, 0, arr.size() - 1, x);
    int index_iterative = firstOcc_iterative(arr, x);
	cout<<index_recursive<<endl<<index_iterative;
	return 0;
}
