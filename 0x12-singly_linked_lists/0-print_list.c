#include "lists.h"

/**
 *print_list - print data in a list
 *@h: pointer to list
 *Return: number of node
 */

size_t print_list(list_t *h)
{
	size_t counter = 0;

	while (h != 0)
	{
		if (h->str == NULL)
		{
			h->str = "[0] (nil)";
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
