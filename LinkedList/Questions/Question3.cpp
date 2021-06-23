/*
Doubly linked list Insertion at given position
Difficulty: Basic

Given a doubly-linked list, a position p, and an integer x. 
The task is to add a new node with value x at the position just 
after pth node in the doubly linked list.

Example 1:

Input:
LinkedList: 2<->4<->5
p = 2, x = 6 
Output: 2 4 5 6
Explanation: p = 2, and x = 6. So, 6 is
inserted after p, i.e, at position 3
(0-based indexing).
Example 2:

Input:
LinkedList: 1<->2<->3<->4
p = 0, x = 44
Output: 1 44 2 3 4
Explanation: p = 0, and x = 44 . So, 44
is inserted after p, i.e, at position 1
(0-based indexing).
Your Task:
The task is to complete the function addNode() which head reference, 
position and data to be inserted as the arguments, with no return type.

Expected Time Complexity : O(N)
Expected Auxilliary Space : O(1)

Constraints:
1 <= N <= 104
0 <= p < N
*/

/* Structure of Doubly Linked List
class Node
{
	int data;
	Node next;
	Node prev;
	Node(int data)
	{
	    this.data = data;
	    next = prev = null;
	}
}*/

class GfG
{
  //Function to insert a new node at given position in doubly linked list.
  void addNode(Node head_ref, int pos, int data)
  {
    Node temp = new Node(data);
    Node curr = head_ref;
    for (int i = 0; i < pos && curr != null; i++)
      curr = curr.next;
    if (curr == null)
    {
      return;
    }
    else if (curr.next == null)
    {
      curr.next = temp;
      temp.prev = curr;
    }
    else
    {
      temp.next = curr.next;
      temp.prev = curr;
      temp.next.prev = temp;
      curr.next = temp;
    }
  }
}
