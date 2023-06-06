#include "lists.h"

/**
* sum_listint - a function that returns the sum of all the
* data (n) of a listint_t linked list
* @head: the head of the linked list
* Return: returns the sum of all the n's
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *mode = head;

	for (; mode != NULL;)
	{
		sum += mode->n;
		mode = mode->next;
	}

	return (sum);
}
