/*
Implement following functions in Circular Doubly Linked List (CDLL):
  1) Print CDLL
  2) Insert at the beginning of CDLL
  3) Insert at the end of the CDLL
*/

import java.io.*;

class CDLL {
  int data;
  CDLL next;
  CDLL prev;

  CDLL(int d) {
    data = d;
    next = null;
    prev = null;
  }
}

class GFG {
  // 1)
  public static void printList(CDLL head) {
    if (head == null)
      return;
    else {
      CDLL curr = head;
      do {
        System.out.print(curr.data + " ");
        curr = curr.next;
      } while (curr != head);
      System.out.println("");
    }
  }

  // 2)
  public static CDLL insertBegin(CDLL head, int d) {
    CDLL temp = new CDLL(d);
    if (head == null) {
      temp.next = temp;
      temp.prev = temp;
      return temp;
    } else {
      temp.next = head;
      temp.prev = head.prev;
      head.prev.next = temp;
      head.prev = temp;
      return temp;
    }
  }

  // 3)
  public static CDLL insertEnd(CDLL head, int d) {
    CDLL temp = new CDLL(d);
    if (head == null) {
      temp.next = temp;
      temp.prev = temp;
      return temp;
    } else {
      temp.next = head;
      temp.prev = head.prev;
      head.prev.next = temp;
      head.prev = temp;
      return head;
    }
  }

  // Main()
  public static void main(String[] args) {
    CDLL head = null;
    for (int i = 10; i > 0; i--)
      head = insertBegin(head, i);
    for (int i = 11; i < 21; i++)
      head = insertEnd(head, i);
    printList(head);
  }
}
