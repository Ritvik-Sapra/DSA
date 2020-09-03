/*
The program illustrates finding the index of the first occurence of an element
in a sorted array using "Recursive Binary Search".

NOTE: Recursive binary search is not preferred. Iterative binary search is much
better due to less memory consumption

Input 1:
6
1 2 2 2 3 3
1

Output 1:
0

Input 2:
6
1 2 2 2 3 3
2

Output 2:
1

Input 3:
6
1 2 2 2 3 3
3

Output 3:
4
*/

#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr, int start, int end, int x) {
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

int main() {
	int x, size, ip;
	vector<int> arr;
	cin>>size;
	for(int i = 0; i < size; i++) {
	    cin>>ip;
	    arr.push_back(ip);
	}
	cin>>x;
	int index = firstOcc(arr, 0, arr.size() - 1, x);
	cout<<index<<endl;
	return 0;
}