#include "lists.h"

/**
 * listint_len - prints number of elements in linked list
 * @h:type listint_t linked list to traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}

	return (i);
}
