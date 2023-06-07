#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index of a listint_t linked list
 * @head: a pointer to the head of the list
 * @index: the index of the node to be deleted
 * Return: returns 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *mode = *head;
	listint_t *moment = NULL;

	if (mode == NULL)
		return (-1);

	if (index == 0)
	{
		*head = mode->next;
		free(mode);
		return (1);
	}

	while (index > 0 && mode != NULL)
	{
		moment = mode;
		mode = mode->next;
		index--;
	}

	if (mode == NULL)
		return (-1);

	moment->next = mode->next;
	free(mode);

	return (1);
}
