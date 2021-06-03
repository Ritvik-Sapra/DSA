/*
Delete last node from DLL.
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

DLL *deleteTail(DLL *head)
{
  if (head == NULL)
    return NULL;
  else if (head->next == NULL)
  {
    delete head;
    return NULL;
  }
  else
  {
    DLL *curr = head;
    while (curr->next != NULL)
    {
      curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;
    return head;
  }
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
  head = deleteTail(head);
  printList(head);
  return 0;
}
