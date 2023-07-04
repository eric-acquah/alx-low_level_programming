#include "lists.h"

/**
 *listint_len - return the number of elements in a list
 *@h: head pointer to list
 *Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
