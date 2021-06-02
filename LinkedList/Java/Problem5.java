/*
Insert at a given position in a singly linked list.
*/

public static Node insertPos(Node head, int pos, int x) {
        Node temp = new Node(x);
        if(pos == 1) {
            temp.next = head;
            return temp;
        }
        Node curr = head;
        for(int i = 1; i<pos-1 && curr!=null; i++)
            curr = curr.next;
        if(curr == null) { return head; }
        temp.next = curr.next;
        curr.next = temp;
        return head;
    }
