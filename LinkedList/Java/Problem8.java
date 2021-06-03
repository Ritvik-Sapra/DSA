/*
Insert at the end of Doubly LL.
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
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 40);
    head = insertEnd(head, 50);
    head = insertEnd(head, 60);
    head = insertEnd(head, 70);
    head = insertEnd(head, 80);
    head = insertEnd(head, 90);
    printList(head);
  }
}
