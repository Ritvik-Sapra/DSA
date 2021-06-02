/*
Delete a node from the starting of the singly linked list.
*/

Node *deleteStart(Node *head)
{
  if (head == NULL)
  {
    return NULL;
  }
  else
  {
    Node *temp = head->next;
    delete head; // In C++ memory deallocation is necessary
    return temp;
  }
}
