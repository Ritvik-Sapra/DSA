/*
Pairwise swap of nodes in LinkeList
Dificulty: Easy

Given a linked list of N positive integers. 
You need to swap elements pairwise. Your task is to 
complete the function pairwise_swap().

Example 1:

Input:
N = 7
value[] = {1,2,3,4,5,6,7}
Output: 2 1 4 3 6 5 7
Explanation:The linked list after swapping
becomes: 1 2 3 4 5 6 7 -> 2 1 4 3 6 5 7.
Example 2:

Input:
N = 6
value[] = {1,2,3,4,5,6}
Output: 2 1 4 3 6 5
Explanation:The linked list after swapping
becomes: 1 2 3 4 5 6 -> 2 1 4 3 6 5.
Your Task:
You don't have to worry about input and output, 
you just have to complete the function pairwise_swap(). 
The printing is done automatically by the driver code.

Constraint:
1 <= N <= 100
1 <= Node values <= 1000

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
*/

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to swap elements pairwise.
struct Node *pairwise_swap(struct Node *head)
{
  // your code here
  if ((head == NULL) && (head->next == NULL))
    return head;
  Node *curr = head->next->next;
  Node *prev = head;
  head = head->next;
  head->next = prev;
  while ((curr != NULL) && (curr->next != NULL))
  {
    prev->next = curr->next;
    prev = curr;
    Node *next = curr->next->next;
    curr->next->next = curr;
    curr = next;
  }
  prev->next = curr;
  return head;
}
