/*
Clone a linked list with next and random pointer
Difficulty: Hard

You are given a special linked list with N nodes 
where each node has a next pointer pointing to its 
next node. You are also given M random pointers , 
where you will be given M number of pairs denoting 
two nodes a and b  i.e. a->arb = b.

Example 1:

Input:
N = 4, M = 2
value = {1,2,3,4}
pairs = {{1,2},{2,4}}
Output: 1
Explanation: In this test case, there
re 4 nodes in linked list.  Among these
4 nodes,  2 nodes have arbit pointer
set, rest two nodes have arbit pointer
as NULL. Second line tells us the value
of four nodes. The third line gives the
information about arbitrary pointers.
The first node arbit pointer is set to
node 2.  The second node arbit pointer
is set to node 4.
Example 2:

Input:
N = 4, M = 2
value[] = {1,3,5,9}
pairs[] = {{1,1},{3,4}}
Output: 1
Explanation: In the given testcase ,
applying the method as stated in the
above example, the output will be 1.
Your Task:
The task is to complete the function copyList() 
which takes one argument the head of the 
linked list to be cloned and should return the 
head of the cloned linked list.
NOTE : If their is any node whose arbitrary pointer 
is not given then its by default null.

Expected Time Complexity : O(n)
Expected Auxilliary Space : O(1)

Constraints:
1 <= N <= 100
1 <= M <= N
1 <= a, b <= 100
*/

/*  the node structure is as follows

struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};
*/

//Function to clone a linked list with next and random pointer.
Node *copyList(Node *head)
{
  Node *curr, *next, *temp;
  // Step 1
  for (curr = head; curr != NULL;)
  {
    next = curr->next;
    curr->next = new Node(curr->data);
    curr->next->next = next;
    curr = next;
  }
  // Step 2
  for (curr = head; curr != NULL; curr = curr->next->next)
  {
    curr->next->arb = curr->arb ? curr->arb->next : NULL;
  }
  // Step 3
  Node *original = head, *copy = head->next;
  temp = copy;
  while (original && copy)
  {
    original->next = original->next ? original->next->next : original->next;
    copy->next = copy->next ? copy->next->next : copy->next;
    original = original->next;
    copy = copy->next;
  }
  return temp;
}
