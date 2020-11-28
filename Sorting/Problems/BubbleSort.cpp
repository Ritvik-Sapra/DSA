/*
Write a simple program to implement bubble sort.

i/p:
5
4 1 3 9 7
o/p:
1 3 4 7 9
*/
#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int i, int n)
{
    // Optimised solution for simple Bubble sort
    for(i=0;i<n-1;i++) {
        if(arr[i]>arr[i+1])
            swap(&arr[i], &arr[i+1]);
    }
}

