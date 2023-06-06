#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * returns head node's data (pk)
 * @head: A pointer to the head of the list
 * return: 0, return value for the pop_listint
 * Return: the head node's data
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
