#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in linked list
 * @h: pointer to the list
 *
 * Return: number of elements 
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}
	return (j);
}
