#include <bits/stdc++.h>

using namespace std;

int SubsetCount(int arr[], int n, int sum){
    if(n == 0){
        if(sum == 0)
            return 1;
        else
            return 0;
    }
    return (SubsetCount(arr, n-1, sum) + SubsetCount(arr, n-1, sum - arr[n-1]));
}

int main(){
    int n, sum;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements of the array"<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"\nEnter the sum to be found in subsets: ";
    cin>>sum;
    int count = SubsetCount(arr, n, sum);
    cout<<"\nNo. of subsets which had the given sum are: "<<count;
    return 0;
}