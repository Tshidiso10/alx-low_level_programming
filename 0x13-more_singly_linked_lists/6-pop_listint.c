#include "lists.h"

/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to the first element 
 * Return: deleted data in elements, 
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (i);
}
