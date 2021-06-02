/*
Insert a node at the starting of a singly Linked List.
*/

#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node(int x)
  {
    data = x;
    next = NULL;
  }
};

Node *insertBegin(Node *head, int x)
{
  Node *temp = new Node(x);
  temp->next = head;
  return temp;
}

void printList(Node *node)
{
  while (node != NULL)
  {
    cout << node->data << " ";
    node = node->next;
  }
}

int main()
{
  Node *head = NULL;
  head = insertBegin(head, 30);
  head = insertBegin(head, 20);
  head = insertBegin(head, 10);
  printList(head);
  return 0;
}
