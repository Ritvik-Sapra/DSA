/*
Given an array of integers, your task is to find the smallest and second 
smallest element in the array. If smallest and second smallest do not exist, print -1.

Input:
The first line of input contains an integer T denoting the number of test cases.
Each test case contains an integer n denoting the size of the array. Then 
following line contains 'n' integers forming the array.

Output:
Print the smallest and second smallest element if possible,else print -1.

Constraints:
1<=T<=100
1<=n<=100
1<=a[i]<=1000

Example:
Input :
3
5
2 4 3 5 6
6
1 2 1 3 6 7
2
1 1
Output :
2 3
1 2
-1
*/

#include<iostream>
#include<limits.h>
using namespace std;

void find(int arr[],int n)
{
    int f,s;
    f=s=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<f)
        {
            s=f;
            f=arr[i];
        }
        else if(arr[i]<s && arr[i]!=f)
        s=arr[i];
    }
    if(s==INT_MAX)
    cout<<-1<<"\n";
    else
    cout<<f<<" "<<s<<"\n";
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        find(arr,n);
    }
}
