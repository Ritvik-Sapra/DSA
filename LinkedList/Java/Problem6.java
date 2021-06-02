/*
Linear search in Singly Linked List (Iterative and Recursive).
*/

// Iterative
    public static int linearSearch(Node head, int x) {
        Node curr = head;
        int i = 1;
        while(curr != null) {
            if(curr.data == x) { return i; }
            i++;
            curr = curr.next;
        }
        return -1;
    }
    // Recursive
    public static int linearSearchRec(Node node, int x) {
        if(node == null) { return -1; }
        if(node.data == x) { return 1; }
        else {
            int res = linearSearchRec(node.next, x);
            if(res == -1) { return -1; }
            else { return (res+1);}
        }
    }
