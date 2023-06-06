#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to the head of the list.
 * @n: The data to be added to the new node.
 *
 * Return: The address of the new element, or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *classic;
	listint_t *modify;

	classic = malloc(sizeof(listint_t));
	while (classic == NULL)
		return (NULL);

	classic->next = NULL;
	classic->n = n;

	while (*head == NULL)
	{
		*head = classic;
		return (classic);
	}

	modify = *head;
	while (modify->next != NULL)
	{
		modify = modify->next;
	}

	modify->next = (classic);

	return (classic);
}
