/*
Given a binary array A[] of size N. The task is to arrange the array in
increasing order.

Note: The binary array contains only 0  and 1.

Input:
2
5
1 0 1 1 0
10
1 0 1 1 1 1 1 0 0 0
Output:
0 0 1 1 1
0 0 0 0 1 1 1 1 1 1
*/

vector<int> SortBinaryArray(vector<int> binArray)
{
    // Your code goes here
    int zero = 0;
    for(int i = 0; i < binArray.size(); i++) {
        if(binArray[i] == 0) {
            swap(binArray[i], binArray[zero]);
            zero += 1;
        }
    }
    return binArray;
}