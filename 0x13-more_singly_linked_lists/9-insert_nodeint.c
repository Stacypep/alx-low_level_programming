#include "lists.h"

/**
* insert_nodeint_at_index - a function that inserts a new
* node at a given position
* @head: a pointer to the head of the linked list
* @idx: the index of the list where the new node should be added.
* Index starts at 0
* @n: the data to be added to the new node
* Return: returns the address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *temp = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (new_node == NULL)
	return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (k = 0, k < idx - 1 && temp != NULL)
	k++;
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
