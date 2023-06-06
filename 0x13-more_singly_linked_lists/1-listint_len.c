#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the list.
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t mass = 0;

	while (h != NULL)
	{
		mass++;
		h = h->next;
	}
	return (mass);
}
