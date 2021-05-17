/*
Quadratic probing is a collision handling technique in hashing. Quadratic probing says that whenever a collision occurs, search for i2 position.

Given an array of integers and a Hash table. Fill the elements of the array into the hash table by using Quadratic Probing in case of collisions.

Example 1:
Input:
hashSize = 11
N = 4
Array[] = {21,10,32,43}
Output: 
10 -1 -1 32 -1 -1 -1 -1 43 -1 2
Explanation: 21%11=10 so 21 goes into 
hashTable[10] position. 10%11=10. 
hashTable[10] is already filled so we try 
for (10+12)%11=0 position. hashTable[0] 
is empty so we put 10 there. 32%11=10. 
hashTable[10] is filled. We try 
(32+12)%11=0. But hashTable[0] is also 
already filled. We try (32+22)%11=3. 
hashTable[3] is empty so we put 32 in 
hashTable[3] position. 43 uses 
(43+33)%11=8. We put it in hashTable[8].

Example 2:
Input:
hashSize = 11
N = 4
Array[] = {880,995,647,172 }
Output:
880 -1 -1 -1 -1 995 -1 172 -1 647 -1 
Explanation: Using the similar approach 
as used in above explanation we will get 
the output like 
880 -1 -1 -1 -1 995 -1 172 -1 647 -1.

Our task:
You don't need to read input or print anything. Your task is to complete the function QuadraticProbing() which takes the hash table hash[], the hash table size hashSize, an array arr[] and the size of the array N as inputs and inserts all the elements of the array arr[] into the hash table using Quadratic Probing as a collision handling technique.
*/

class Solution
{
public:
  //Function to fill the array elements into a hash table
  //using Quadratic Probing to handle collisions.
  void QuadraticProbing(vector<int> &hash, int hashSize, int arr[], int N)
  {
    //Your code here
    int size = 0;
    for (int i = 0; i < hashSize; i++)
      hash[i] = -1;
    for (int i = 0; i < N; i++)
    {
      if (size == hashSize)
        break;
      int h = arr[i] % hashSize;
      int iterate = 0;
      while (hash[h] != -1)
      {
        iterate++;
        h = ((arr[i] + (iterate * iterate)) % hashSize);
      }
      hash[h] = arr[i];
      size++;
    }
  }
};
