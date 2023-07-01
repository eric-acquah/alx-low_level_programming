#include "lists.h"

/**
 *list_len - return the number of elements in lis
 *@h: pointer to linked list
 *Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
