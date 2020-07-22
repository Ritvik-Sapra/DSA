/*
The problem is to rotate the elements of an array anti-clockwise, with d-th
index as the pivot point.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Sample Input:
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20

Sample Output:
3 4 5 1 2
8 10 12 14 16 18 20 2 4 6
*/

void reverse(int arr[], int low, int high){ 
    //function to reverse with starting(low) and ending(high) index as arguments
    while(low<high){
        swap(arr[low], arr[high]);
        low++;  high--;
    }
}

void rotateArr(int arr[], int d, int n){
    // code here
    /*
    The logic is to to first rotate elements from 0 to d-1 index.
    Then rotate from d to n-1 index.
    And finally reverse the whole array.
    */
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}