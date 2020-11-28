/*
This problem is to find how many no. of triangles are possible from the given
array. Each element represent the legnth of a side.
Remember the condition which defines if a triangle can be formed or not:
a+b>c

Input: 
5
6 4 9 7 8

Output: 
10

Explanation: 
There are 10 triangles
possible  with the given elements like
(6,4,9), (6,7,8),...

Solution: We first sort the array and then for each pair, check how many numbers
verify the condition.
*/

int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        int count = 0;
        sort(arr, arr+n);
        for(int i = 0; i < n-2; i++) {
            int k = i+2;
            for(int j = i+1; j < n; j++) {
                while(k<n && arr[i]+arr[j]>arr[k])
                    k+=1;
                count += k-j-1;
            }
        }
        return count;
    }
