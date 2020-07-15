/*
Given an array, 'arr' of size n. It contains number from 1 to n. 
We need to count the frequency of number appearing in the array.
*/

void frequencycount(vector<int>& arr,int n)
{ 
    // code here
    for(int i = 0; i < n; i++)
        arr[i]-=1;
    for(int i = 0; i < n; i++){
        arr[arr[i]%n]+=n;
    }
    for(int i = 0; i < n; i++){
        arr[i] = arr[i]/n;
    }
}