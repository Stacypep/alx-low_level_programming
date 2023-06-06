#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a funcion that prints the elements of a listint_t list
 * @h: a pointer to a listint_t list
 * Return: number of nodes are returned
 */

size_t print_listint(const listint_t *h)
{
	size_t ks = 0;

	if (h == NULL)
		return (ks);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		ks++;
		h = h->next;
	}
	return (ks);
}
