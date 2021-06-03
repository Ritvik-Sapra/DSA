/*
Insert at beginning of Doubly Linked List (DLL).
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
  public static DLL insertBegin(DLL head, int x) {
    DLL temp = new DLL(x);
    if (head == null) {
      return temp;
    }
    temp.next = head;
    head.prev = temp;
    return temp;
  }

  public static void printList(DLL node) {
    while (node != null) {
      System.out.print(node.data + " ");
      node = node.next;
    }
  }

  public static void main(String[] args) {
    DLL head = null;
    head = insertBegin(head, 50);
    head = insertBegin(head, 40);
    head = insertBegin(head, 30);
    head = insertBegin(head, 20);
    head = insertBegin(head, 10);
    printList(head);
  }
}
