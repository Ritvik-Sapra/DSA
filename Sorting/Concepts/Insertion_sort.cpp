/*
This code implements Insertion sort in C++.

I/p:
40 20 10 20 50
O/p:
10 20 20 40 50

I/p:
2 1 48 22 21 80 50
O/p:
1 2 21 22 48 50 80 
*/

#include <iostream>
#include <vector>
using namespace std;

void insertSort(vector<int> arr) {
    int n = arr.size();
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}

int main() {
	vector<int> arr;
	int ip;
	while(cin>>ip) 
	    arr.push_back(ip);
	insertSort(arr);
	return 0;
}
