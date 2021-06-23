/*
Identical Linked Lists
Difficulty: Basic

Given two Singly Linked List of N and M nodes respectively. 
The task is to check whether two linked lists are identical or not. 
Two Linked Lists are identical when they have same data and with same arrangement too.

Example 1:

Input:
LinkedList1: 1->2->3->4->5->6
LinkedList2: 99->59->42->20
Output: Not identical 
Example 2:

Input:
LinkedList1: 1->2->3->4->5
LinkedList2: 1->2->3->4->5
Output: Identical

Your Task:
The task is to complete the function areIdentical() which takes 
the head of both linked lists as arguments and returns True or False.

Constraints:
1 <= N <= 103

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)
*/

/*
Structure of the node of the linked list is as
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to check whether two linked lists are identical or not.
bool areIdentical(struct Node *head1, struct Node *head2)
{
  // Code here
  int len1 = 0, len2 = 0;
  for (Node *curr = head1; curr != NULL; curr = curr->next)
    len1++;
  for (Node *curr = head2; curr != NULL; curr = curr->next)
    len2++;
  if (len1 != len2)
    return false;
  else
  {
    Node *curr1 = head1, *curr2 = head2;
    while (curr1 && curr2)
    {
      if (curr1->data != curr2->data)
        return false;
      curr1 = curr1->next;
      curr2 = curr2->next;
    }
    return true;
  }
}
