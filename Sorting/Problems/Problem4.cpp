/*
Given a string S consisting of lowercase Latin letters, arrange all its letters 
in lexicographical order using Counting Sort.

Input: N = 5, S = "edsab"
Output: abdes
Explanation: 
In lexicographical order, string will be abdes.

Input: N = 13, S = "geeksforgeeks"
Output: eeeefggkkorss
Explanation: In lexicographical order, 
string will be eeeefggkkorss.
*/

char* countSort(char arr[])
{

    // Your code goes here
    int count[RANGE+1], i;
    char output[strlen(arr)];
    for(i=0; i<=RANGE; i++)
        count[i]=0;
    for(i=0; arr[i]; i++)
        count[arr[i]]+=1;
    for(i=1; i<=RANGE; i++)
        count[i] += count[i-1];
    for(i=0; arr[i]; i++) {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]-=1;
    }
    for(i=0; arr[i]; i++)
        arr[i] = output[i];
    return arr;
}
