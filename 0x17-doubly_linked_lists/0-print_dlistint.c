#include "lists.h"

/**
 *print_dlistint - print elements within a doubly linked list
 *@h: pointer to head node of list
 *Return: number of elements within a list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
