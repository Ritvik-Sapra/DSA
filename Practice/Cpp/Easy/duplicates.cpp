/*
Given an array a[] of size N which contains elements from 0 to N-1, you need to 
find all the elements occurring more than once in the given array.

Input:
N = 4
a[] = {0,3,1,2}
Output: -1
Explanation: N=4 and all elements from 0
to (N-1 = 3) are present in the given
array. Therefore output is -1.

Input:
N = 5
a[] = {2,3,1,2,3}
Output: 2 3 
Explanation: 2 and 3 occur more than once
in the given array.

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).
*/

vector<int> duplicates(int a[], int n) {
    // code here
    vector<int> ans;
    for(int i = 0; i < n; i++) {
        int idx = a[i]%n;
        a[idx] += n;
    }
    for(int i = 0; i < n; i++) {
        if(a[i]/n > 1)
            ans.push_back(i);
    }
    if(ans.empty())
        ans.push_back(-1);
    return ans;
}
