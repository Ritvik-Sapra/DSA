/*
Write a function that takes two arrays and their size as input, and returns a
vector of their union.

Input: 
N = 5, arr1[] = {1, 2, 3, 4, 5}  
M = 3, arr2 [] = {1, 2, 3}
Output: 1 2 3 4 5
Explanation: Distinct elements including 
both the arrays are: 1 2 3 4 5.

NOTE: Both arrays will be sorted.
*/

vector<int> findUnion(int A[], int B[], int m, int n)
{
    //Your code here
    //return vector with correct order of elements
    int i = 0, j = 0;
    vector<int> out;
    while(i<m && j<n) {
        while(i+1<m && A[i+1]==A[i])
            i+=1;
        while(j+1<n && B[j+1]==B[j])
            j+=1;
        if(A[i]<B[j])
            out.push_back(A[i++]);
        else if(B[j]<A[i])
            out.push_back(B[j++]);
        else {
            out.push_back(A[i]); i++; j++;
        }
    }
    while(i<m) {
        while(i+1<m && A[i+1]==A[i])
            i++;
        out.push_back(A[i++]);
    }
    while(j<n) {
        while(j+1<n && B[j+1]==B[j])
            j++;
        out.push_back(B[j++]);
    }
    return out;
}