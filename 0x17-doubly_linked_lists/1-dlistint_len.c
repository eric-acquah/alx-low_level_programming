#include "lists.h"

/**
 *dlistint_len - The a count of elements within a list
 *@h: pointer to the head node of the list
 *Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
