/*
This file shows efficient solution for finding intersection of two arrays.

Input: 
N = 4, arr1[] = {1, 2, 3, 4}  
M = 5, arr2 [] = {2, 4, 6, 7, 8}
Output: 2 4
Explanation: 2 and 4 are only common 
elements in both the arrays.

NOTE: A better solution may exist using Hashing.
*/

vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
{ 
    //Your code here
    int i=0, j=0;
    vector<int> out;
    while(i<N && j<M) {
        while(i+1<N && arr1[i+1]==arr1[i])
            i++;
        while(j+1<M && arr2[j+1]==arr2[j])
            j++;
        if(arr1[i] == arr2[j]) {
            out.push_back(arr1[i]); i++; j++;
        }
        else if(arr1[i] < arr2[j])
            i++;
        else
            j++;
    }
    return out;
}
