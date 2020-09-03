/*
This program count the no. of 1s in a given binary sorted array.

Input 1:
6
0 0 0 0 1 1

Output:
2
*/

#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr) {
    int x = 1;
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

int countOcc(vector<int> arr) {
    int first = firstOcc(arr);
    if(first == -1)
        return -1;
    else 
        return (arr.size() - first);
}

int main() {
	int size, x, ip;
	vector<int> arr;
	cin>>size;
	for(int i = 0; i < size; i++) {
	    cin>>ip;
	    arr.push_back(ip);
	}
	//cin>>x;
	int count = countOcc(arr);
	cout<<count<<endl;
	return 0;
}
