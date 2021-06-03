/*
Delete head of DLL.
*/

import java.io.*;

class DLL {
  int data;
  DLL next;
  DLL prev;

  DLL(int x) {
    data = x;
    next = null;
    prev = null;
  }
}

class GFG {
  public static DLL deleteHead(DLL head) {
    if (head == null || head.next == null)
      return null;
    else {
      head = head.next;
      head.prev = null;
      return head;
    }
  }

  public static DLL insertEnd(DLL head, int x) {
    DLL temp = new DLL(x);
    if (head == null) {
      return temp;
    }
    DLL curr = head;
    while (curr.next != null) {
      curr = curr.next;
    }
    curr.next = temp;
    temp.prev = curr;
    return head;
  }

  public static void printList(DLL node) {
    while (node != null) {
      System.out.print(node.data + " ");
      node = node.next;
    }
    System.out.println("");
  }

  public static void main(String[] args) {
    DLL head = null;
    for (int i = 10; i <= 100; i += 10)
      head = insertEnd(head, i);
    printList(head);
    head = deleteHead(head);
    printList(head);
  }
}
