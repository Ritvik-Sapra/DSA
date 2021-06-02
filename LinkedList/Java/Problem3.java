/*
Delete a node from the starting of the singly linked list.
*/

public static Node deleteBegin(Node head) {
  // In java we don't have to worry about memory deallocation.
        if(head == null) { return null; }
        else { return head.next; }
    }
