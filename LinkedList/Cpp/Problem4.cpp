/*
Delete from the end of the singly Linked List.
*/

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

Node *deleteEnd(Node *head)
{
  if (head == NULL)
    return NULL;
  if (head->next == NULL)
  {
    delete head;
    return NULL;
  }
  Node *curr = head;
  while (curr->next->next != NULL)
    curr = curr->next;
  delete (curr->next);
  curr->next = NULL;
  return head;
}
