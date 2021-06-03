/*
Insert at beginning of Doubly Linked List (DLL).
*/

#include <iostream>
using namespace std;

struct DoublyLL
{
  int data;
  DoublyLL *next;
  DoublyLL *prev;
  DoublyLL(int x)
  {
    data = x;
    next = NULL;
    prev = NULL;
  }
};

DoublyLL *insertBegin(DoublyLL *head, int x)
{
  DoublyLL *temp = new DoublyLL(x);
  if (head == NULL)
  {
    return temp;
  }
  temp->next = head;
  head->prev = temp;
  return temp;
}

void printList(DoublyLL *node)
{
  while (node != NULL)
  {
    cout << node->data << " ";
    node = node->next;
  }
}

int main()
{
  DoublyLL *head = NULL;
  head = insertBegin(head, 40);
  head = insertBegin(head, 30);
  head = insertBegin(head, 20);
  head = insertBegin(head, 10);
  printList(head);
  return 0;
}
