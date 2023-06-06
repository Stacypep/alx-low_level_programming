#include "lists.h"

/**
* add_nodeint_end - a function that adds a node at the end
* of a listint_t list
* @head: the head of the listint_t list
* @n: the data to be added to the new node
* Return: returns the address of the new element, or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *kyle;
	listint_t *mode;

	kyle = malloc(sizeof(listint_t));

	if (kyle == NULL)
		return (NULL);
	mode = *head;

	if (*head == NULL)
	{
		kyle->next = NULL;
		kyle->n = n;
		*head = kyle;

		return (kyle);
	}
	do {
		(mode = mode->next);
	} while (mode->next != NULL);
	/** Loop until the last node is reached*/

	kyle->next = NULL;
	kyle->n = n;
	mode->next = kyle;

	return (kyle);
}
