/*
Inversion Count: For an array, inversion count indicates how far (or close) the 
array is from being sorted. If array is already sorted then the inversion count 
is 0. If an array is sorted in the reverse order then the inversion count is the 
maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).
*/

long long my_counter = 0;

void count_and_merge(long long arr[], long long l, long long m, long long r) {
    long long n1=m-l+1, n2=r-m;
    long long left[n1], right[n2];
    long long i, j, k;
    for(i=0;i<n1;i++)
        left[i]=arr[l+i];
    for(j=0;j<n2;j++)
        right[j]=arr[m+1+j];
    i=0; j=0; k=l;
    while(i<n1 && j<n2) {
        if(left[i]<=right[j]) { arr[k]=left[i]; i++; }
        else { arr[k]=right[j]; j++; my_counter += n1-i; }
        k++;
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];
}

void count_inversions(long long arr[], long long l, long long r) {
    long long int res=0;
    if(l<r) {
        long long m = l+(r-l)/2;
        count_inversions(arr, l, m);
        count_inversions(arr, m+1, r);
        count_and_merge(arr, l, m, r);
    }
}

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    count_inversions(arr, 0, N-1);
    long long int res = my_counter;
    my_counter = 0;
    return res;
}
