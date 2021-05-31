/*
This function returns a boolean value that if given array of elements contain 
a triplet whose sum is zero.

Input: N = 5, arr[] = {0, -1, 2, -3, 1}
Output: true
Explanation: 0, -1 and 1 forms a triplet
with sum equal to 0.

Input: N = 3, arr[] = {1, 2, 3}
Output: false
Explanation: No triplet with zero sum exists. 

Similar problem: Triplet_sum_in_array.cpp, Find_no_of_triangles.cpp
*/

bool findTriplets(int arr[], int n)
{ 
    //Your code here
    sort(arr, arr+n);
    for(int i = 0; i < n-2; i++) {
        int l=i+1, r=n-1, x=arr[i];
        while(l<r) {
            if(x+arr[l]+arr[r] == 0)
                return true;
            else if(x+arr[l]+arr[r] < 0)
                l++;
            else
                r--;
        }
    }
    return false;
}
