#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: pointer to first element
 * @index: index of node to delete
 *
 * Return: 1, 
 * or -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem = *head;
	listint_t *present = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tem || !(tem->next))
			return (-1);
		tem = tem->next;
		i++;
	}


	present = tem->next;
	tem->next = present->next;
	free(present);

	return (1);
}
