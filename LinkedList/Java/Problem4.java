/*
Delete from the last of Singly Linked List.
*/

public static Node deleteEnd(Node head) {
        if((head == null) || (head.next == null)) { return null; }
        Node curr = head;
        while(curr.next.next != null)
            curr = curr.next;
        curr.next = null;
        return  head;
    }
