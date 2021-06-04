/*
Implement these functions in Circular Linked List (CLL):
  1) Print CLL
  2) Add Nodes in the beginning of the CLL
  3) Add Nodes in the end of the CLL
  4) Delete the head (first node) in the CLL
  5) Delete the Kth node from the CLL
*/

import java.io.*;

class CLL {
  int data;
  CLL next;

  CLL(int d) {
    data = d;
    next = null;
  }
}

class GFG {
  // 1)
  public static void printList(CLL head) {
    if (head == null)
      return;
    else {
      CLL curr = head;
      do {
        System.out.print(curr.data + " ");
        curr = curr.next;
      } while (curr != head);
      System.out.println("");
    }
  }

  // 2)
  public static CLL insertBegin(CLL head, int d) {
    CLL temp = new CLL(d);
    if (head == null) {
      temp.next = temp;
      return temp;
    } else {
      temp.next = head.next;
      head.next = temp;
      int t = head.data;
      head.data = temp.data;
      temp.data = t;
      return head;
    }
  }

  // 3)
  public static CLL insertEnd(CLL head, int d) {
    CLL temp = new CLL(d);
    if (head == null) {
      temp.next = temp;
      return temp;
    } else {
      temp.next = head.next;
      head.next = temp;
      int t = head.data;
      head.data = temp.data;
      temp.data = t;
      return temp;
    }
  }

  // 4)
  public static CLL deleteHead(CLL head) {
    if ((head == null) || (head.next == head))
      return null;
    else {
      head.data = head.next.data;
      head.next = head.next.next;
      return head;
    }
  }

  // 5)
  public static CLL deleteKNode(CLL head, int k) {
    if (head == null)
      return null;
    else if (k == 1)
      return deleteHead(head);
    else {
      CLL curr = head;
      for (int i = 0; i < k - 2; i++)
        curr = curr.next;
      curr.next = curr.next.next;
      return head;
    }
  }

  // Main()
  public static void main(String[] args) {
    CLL head = null;
    for (int i = 10; i > 0; i--)
      head = insertBegin(head, i);
    for (int i = 11; i < 21; i++)
      head = insertEnd(head, i);
    printList(head);
    for (int i = 1; i <= 10; i++)
      head = deleteKNode(head, i);
    printList(head);
    for (int i = 0; i < 5; i++)
      head = deleteHead(head);
    printList(head);
  }
}