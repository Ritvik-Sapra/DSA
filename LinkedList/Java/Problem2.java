package LinkedList.Java;
/*
Insert a node at the end of a singly Linked List.
*/

import java.io.*;
import java.util.*;

class Node {
  int data;
  Node next;

  Node(int x) {
    data = x;
    next = null;
  }
}

class Problem2 {
  public static Node insertEnd(Node head, int x) {
    Node temp = new Node(x);
    if (head == null) {
      return temp;
    }
    Node curr = head;
    while (curr.next != null)
      curr = curr.next;
    curr.next = temp;
    return head;
  }

  public static void printList(Node head) {
    Node curr = head;
    while (curr != null) {
      System.out.print(curr.data + " ");
      curr = curr.next;
    }
  }

  public static void main(String[] args) {
    Node head = null;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    printList(head);
  }
}
