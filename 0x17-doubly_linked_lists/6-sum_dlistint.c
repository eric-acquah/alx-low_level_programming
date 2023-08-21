#include "lists.h"

/**
 *sum_dlistint - sum the numbers stored in the node of a doubly linked list
 *@head: pointer to head node
 *Return: the sum of data integer stored in each node
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int total = 0;

	while (tmp != NULL)
	{
		total += tmp->n;
		tmp = tmp->next;
	}
	return (total);
}
