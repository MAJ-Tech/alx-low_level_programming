#include "lists.h"

/**
 * find_listint_loop - A function that find a loop in a link list listint_t.
 * @head: First node in the list listint_t.
 * Return: A pointer to the node where the loop starts or NULL if no loop.
 */
listint_t *find_listint_loop(listint *head)
{
  
  listint_t *slow = head;
  listint_t *fast = head;
  while(slow != NULL && fast != NULL && fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;
      if(fast == slow)
	return (fast);
    }
  return (NULL);
}
  
