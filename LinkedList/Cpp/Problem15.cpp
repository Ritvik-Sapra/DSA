/*
Implement these functions in Circular Linked List (CLL):
  1) Print CLL
  2) Add Nodes in the beginning of the CLL
  3) Add Nodes in the end of the CLL
  4) Delete the head (first node) in the CLL
  5) Delete the Kth node from the CLL
*/

#include <bits/stdc++.h>
using namespace std;

struct CLL
{
  int data;
  CLL *next;
  CLL(int d)
  {
    data = d;
    next = NULL;
  }
};

// 1) Function to print the CLL
void printList(CLL *head)
{
  if (head == NULL)
    return;
  CLL *curr = head;
  do
  {
    cout << curr->data << " ";
    curr = curr->next;
  } while (curr != head);
  cout << endl;
}

// 2) Function to add nodes at the start of CLL
CLL *insertBegin(CLL *head, int x)
{
  // Takes O(1) time
  CLL *temp = new CLL(x);
  if (head == NULL)
  {
    temp->next = temp;
    return temp;
  }
  else
  {
    temp->next = head->next;
    head->next = temp;
    swap(head->data, temp->data);
    return head;
  }
}

// 3) Function to insert nodes at the end of CLL
CLL *insertEnd(CLL *head, int x)
{
  // Takes O(1) time
  CLL *temp = new CLL(x);
  if (head == NULL)
  {
    temp->next = temp;
    return temp;
  }
  else
  {
    temp->next = head->next;
    head->next = temp;
    swap(head->data, temp->data);
    return temp;
  }
}

// 4) Function to delete the head (frist node) from the CLL
CLL *deleteHead(CLL *head)
{
  if (head == NULL)
    return NULL;
  else if (head->next == head)
  {
    delete head;
    return NULL;
  }
  else
  {
    CLL *temp = head->next;
    head->data = temp->data;
    head->next = temp->next;
    delete temp;
    return head;
  }
}

// 5) Function to delete the Kth node from the CLL
CLL *deleteKNode(CLL *head, int k)
{
  if (head == NULL)
    return NULL;
  else if (head->next == head)
  {
    delete head;
    return NULL;
  }
  else if (k < 1)
    return head;
  else if (k == 1)
    return deleteHead(head);
  else
  {
    CLL *curr = head;
    for (int i = 0; i < k - 2; i++)
      curr = curr->next;
    CLL *temp = curr->next;
    curr->next = temp->next;
    delete temp;
    return head;
    //Alternatively, we could also do:
    /*
    int i = 1;
    CLL *curr = head;
    while(i != k) {
      curr = curr->next;  //i.e. reach the Kth node
      i++;
    }
    CLL *temp = curr->next;
    curr->next = temp->next;    //i.e. duplicate K+1 node and K node
    curr->data = temp->data;
    delete temp;    //i.e. delete the (K+1)th node
    return head;
    */
    //This code will also remove the condition "else if(k == 1)",
    //as it can handle deleting the head as well.
  }
}

// Main()
int main()
{
  CLL *head = NULL;
  // Inserting nodes 1-10 from the beginning
  for (int i = 10; i > 0; i--)
    head = insertBegin(head, i);
  // Inserting nodes 11-20 from the end
  for (int i = 11; i <= 20; i++)
    head = insertEnd(head, i);
  printList(head);
  // Delete Kth node. Deleting alternatives. Deleting all odd no.
  for (int i = 1; i <= 10; i++)
  {
    head = deleteKNode(head, i);
  }
  printList(head);
  // Delete 5 head from begining
  for (int i = 0; i < 5; i++)
    head = deleteHead(head);
  printList(head);
  return 0;
}
