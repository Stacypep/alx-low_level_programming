#include "lists.h"

/**
* free_listint - a function that frees a listint_t list
* @head: a pointer to the head of the list
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *mode;

	for (head != NULL)
	{
		mode = head;
		head = head->next;
		free(mode);
	}
}
