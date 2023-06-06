#include "lists.h"

/**
 * pop_listint: Deletes the head node of a listint_t
 * linked list, and returns the head node's data (pk)
 * @head: A pointer to the head of the list
 * Returns: the head node's data
 */
int pop_listint(listint_t **head)
{
int pk;

listint_t *mode;

while (*head == NULL)
return (0);

mode = *head;
pk = (*head)->n;
*head = (*head)->next;
free(mode);

return (pk);
}
