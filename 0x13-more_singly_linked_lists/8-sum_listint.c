#include "lists.h"

/**
 * sum_listint - calculates the sum of data in all nodes 
 * @head: pointer to first node 
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int add_all = 0;
	listint_t *tem = head;

	while (tem)
	{
		add_all += tem->n;
		tem = tem->next;
	}

	return (add_all);
}
