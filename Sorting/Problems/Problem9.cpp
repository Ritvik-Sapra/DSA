/*
Difficulty: MEDIUM
Given three sorted arrays A, B and C of size N, M and P respectively. 
The task is to merge them into a single array which must be sorted in increasing
order.

Input: 
N = 4, A[] = [1 2 3 4] 
M = 5, B[] = [1 2 3 4 5] 
P = 6, C[] = [1 2 3 4 5 6]
Output: 1 1 1 2 2 2 3 3 3 4 4 4 5 5 6
Explanation: Merging these three sorted arrays, 
we have: 1 1 1 2 2 2 3 3 3 4 4 4 5 5 6.

Input: 
N = 2, A[] = [1 2]
M = 3, B[] = [2 3 4] 
P = 4, C[] = [4 5 6 7]
Output: 1 2 2 3 4 4 5 6 7
Explanation: Merging three sorted arrays, 
we have: 1 2 2 3 4 4 5 6 7.

Expected Time Complexity: O(N + M + P)
Expected Auxiliary Space: O(N + M + P) for the resultant array only.

Solution: There can be two approaches to solve this problem =>
i) sort two arrays first and then merge it with third one.
ii) take all three arrays at once, which will have three cases of one by one
exhaustion of arrays.
Here, approach (ii) is followed, and all three arrays are considered at once.
*/

vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
{ 
    // let a, b, c be size of A, B, C respectively
    int a=A.size(), b=B.size(), c=C.size(), i=0, j=0, k=0;
    vector<int> output;
    while(i<a && j<b && k<c) {
        int m = min(min(A[i], B[j]), C[k]);
        output.push_back(m);
        if(m==A[i])
            i++;
        else if(m==B[j])
            j++;
        else
            k++;
    }   // One array has exhausted
    // If C has exhausted
    while(i<a && j<b) {
        if(A[i]<B[j])
            output.push_back(A[i++]);
        else
            output.push_back(B[j++]);
    }
    // If B has exhausted
    while(i<a && k<c) {
        if(A[i]<C[k])
            output.push_back(A[i++]);
        else
            output.push_back(C[k++]);
    }
    // If A has exhausted
    while(j<b && k<c) {
        if(B[j]<C[k])
            output.push_back(B[j++]);
        else
            output.push_back(C[k++]);
    }   // Two arrays has exhausted;
    while(i<a) { output.push_back(A[i++]); }
    while(j<b) { output.push_back(B[j++]); }
    while(k<c) { output.push_back(C[k++]); }
    return output;
}
