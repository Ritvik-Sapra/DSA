/*
Implement following functions in Circular Doubly Linked List (CDLL):
  1) Print CDLL
  2) Insert at the beginning of CDLL
  3) Insert at the end of the CDLL
*/

#include <iostream>
using namespace std;

struct CDLL
{
  int data;
  CDLL *next;
  CDLL *prev;
  CDLL(int d)
  {
    data = d;
    next = prev = NULL;
  }
};

// 1) Function to print CDLL
void printList(CDLL *head)
{
  if (head == NULL)
    return;
  CDLL *curr = head;
  do
  {
    cout << curr->data << " ";
    curr = curr->next;
  } while (curr != head);
}

// 2) Function to insert nodes at the start of CDLL
CDLL *insertBegin(CDLL *head, int d)
{
  CDLL *temp = new CDLL(d);
  if (head == NULL)
  {
    temp->next = temp;
    temp->prev = temp;
    return temp;
  }
  else
  {
    temp->next = head;
    temp->prev = head->prev;
    head->prev->next = temp;
    head->prev = temp;
    return temp;
  }
}

// 3) Function to insert nodes at the end of CDLL
CDLL *insertEnd(CDLL *head, int d)
{
  CDLL *temp = new CDLL(d);
  if (head == NULL)
  {
    temp->next = temp;
    temp->prev = temp;
    return temp;
  }
  else
  {
    temp->next = head;
    temp->prev = head->prev;
    head->prev->next = temp;
    head->prev = temp;
    return head;
  }
}

// Main()
int main()
{
  CDLL *head = NULL;
  for (int i = 10; i > 0; i--)
    head = insertBegin(head, i);
  for (int i = 11; i < 21; i++)
    head = insertEnd(head, i);
  printList(head);
  return 0;
}
