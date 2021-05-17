/*
Separate chaining technique in hashing allows to us to use a linked list at each hash slot to handle the problem of collisions. That is, every slot of the hash table is a linked list, so whenever a collision occurs, the element can be appened as a node to the linked list at the slot.

In this question, we'll learn how to fill up the hash table using Separate chaining technique. Given an array and a hashtable size, you have to fill the elements of the array into a hash table of given size.

Example 1:
Input:
hashSize = 10
sizeOfArray = 6
arr[] = {92,4,14,24,44,91}
Output:
1->91
2->92
4->4->14->24->44
Explanation: 92%10=2 so 92 goes to slot 2.
4%10=4 so 4 goes to slot 4. 14%10=4. But 4
is already occupied so we make a linked
list at this position and add 14 after 4 
in slot 4 and so on.

Example 2:
Input:
hashSize = 10
sizeOfArray = 5
arr[] = {12,45,36,87,11}
Output:
1->11
2->12
5->45
6->36
7->87
Explanation: 12%10=2 so 12 goes to slot 2.
45%10=5 goes to slot 5. 36%10=6 goes to
slot 6. 87%10=7 goes to slot 7 and finally
11%10=1 goes to slot 1.

Our task is to complete the function and return the hash table.
we assume the printing is done by the driver code.
*/

class Solution
{
public:
  //Complete this function
  //Function to insert elements of array in the hashTable avoiding collisions.
  vector<vector<int>> separateChaining(int hashSize, int arr[], int sizeOfArray)
  {
    vector<vector<int>> hashTable(hashSize);
    // iterating through the array elements
    for (int i = 0; i < sizeOfArray; i++)
    {
      hashTable[arr[i] % hashSize].push_back(arr[i]);
    }
    return hashTable;
  }
};
