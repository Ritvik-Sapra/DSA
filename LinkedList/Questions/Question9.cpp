/*
Merge two sorted linked lists
Difficulty: Medium

Given two sorted linked lists consisting of N and M nodes respectively. 
The task is to merge both of the list (in-place) and return head of the merged list.
 

Example 1:

Input:
N = 4, M = 3 
valueN[] = {5,10,15,40}
valueM[] = {2,3,20}
Output: 2 3 5 10 15 20 40
Explanation: After merging the two linked
lists, we have merged list as 2, 3, 5,
10, 15, 20, 40.
Example 2:

Input:
N = 2, M = 2
valueN[] = {1,1}
valueM[] = {2,4}
Output:1 1 2 4
Explanation: After merging the given two
linked list , we have 1, 1, 2, 4 as
output.
Your Task:
The task is to complete the function sortedMerge() which takes 
references to the heads of two linked lists as the arguments and 
returns the head of merged linked list.

Expected Time Complexity : O(n+m)
Expected Auxilliary Space : O(1)

Constraints:
1 <= N, M <= 104
1 <= Node's data <= 105
*/

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.
Node *sortedMerge(Node *head1, Node *head2)
{
  // code here
  if (head1 == NULL)
    return head2;
  if (head2 == NULL)
    return head1;
  Node *a = head1, *b = head2;
  Node *tail = NULL, *head = NULL;
  if (a->data <= b->data)
  {
    head = tail = a;
    a = a->next;
  }
  else
  {
    head = tail = b;
    b = b->next;
  }
  while (a != NULL && b != NULL)
  {
    if (a->data <= b->data)
    {
      tail->next = a;
      tail = a;
      a = a->next;
    }
    else
    {
      tail->next = b;
      tail = b;
      b = b->next;
    }
  }
  if (a == NULL)
    tail->next = b;
  if (b == NULL)
    tail->next = a;
  return head;
}
