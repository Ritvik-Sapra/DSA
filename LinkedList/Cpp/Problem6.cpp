/*
Linear search in Singly Linked List (Iterative and Recursive).
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

// Iterative
int linearSearch(Node *head, int x)
{
  Node *curr = head;
  for (int i = 1; curr != NULL; i++)
  {
    if (curr->data == x)
    {
      return i;
    }
    curr = curr->next;
  }
  return -1;
}

// Recursive
int linearSearchRec(Node *node, int x)
{
  if (node == NULL)
  {
    return -1;
  }
  if (node->data == x)
  {
    return 1;
  }
  else
  {
    int res = linearSearchRec(node->next, x);
    if (res == -1)
    {
      return -1;
    }
    else
    {
      return (res + 1);
    }
  }
}
