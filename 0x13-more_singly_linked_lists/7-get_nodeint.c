#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 * Return: pointer to the nth node of the list, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *descent = head;
	unsigned int bf;

	/* Checking if the node exists */
	for (bf = 0; descent; bf++)
	{
		if (bf == index)
		return (descent);

		descent = descent->next;
	}
	return (NULL);
}
