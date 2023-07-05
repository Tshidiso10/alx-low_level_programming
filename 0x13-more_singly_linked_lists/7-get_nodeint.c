#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index in linked list
 * @head: pointer to first node 
 * @index: index of the node to return
 *
 * Return: pointer to node, 
 * or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *tem = head;

	for (i = 0; tem && i < index; i++)
	{
		tem = tem->next;
	}

	return (tem ? tem : NULL);
}
