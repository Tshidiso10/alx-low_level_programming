#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node in linked list at index
 * @head: pointer to first node
 * @idx: index for new node 
 * @n: data to insert in the new node
 * Return: pointer to new node, 
 * or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *tem = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	
	while (tem && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = tem->next;
			tem->next = new;
			return (new);
		}
		else
			tem = tem->next;
        i++
	}
	return (NULL);
}
