/*
Reverse a DLL.
*/

#include <bits/stdc++.h>
using namespace std;

struct DLL
{
  int data;
  DLL *next;
  DLL *prev;
  DLL(int x)
  {
    data = x;
    next = NULL;
    prev = NULL;
  }
};

DLL *reverseDLL(DLL *head)
{
  if ((head == NULL) || (head->next == NULL))
    return head;
  DLL *curr = head;
  while (curr->next != NULL)
  {
    swap(curr->next, curr->prev);
    curr = curr->prev;
  }
  // curr exited at the last node.
  // So we swap for last node explicitly.
  swap(curr->next, curr->prev);
  return curr;
}

DLL *insertStart(DLL *head, int x)
{
  DLL *temp = new DLL(x);
  if (head == NULL)
  {
    return temp;
  }
  temp->next = head;
  head->prev = temp;
  return temp;
}

void printList(DLL *head)
{
  DLL *curr = head;
  while (curr != NULL)
  {
    cout << curr->data << " ";
    curr = curr->next;
  }
  cout << endl;
}

int main()
{
  DLL *head = NULL;
  for (int i = 10; i > 0; i--)
    head = insertStart(head, i);
  printList(head);
  head = reverseDLL(head);
  printList(head);
  return 0;
}
