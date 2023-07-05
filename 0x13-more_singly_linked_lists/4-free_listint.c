#include "lists.h"

/**
 *free_listint - free list
 *
 *@head: pointer to first node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;

	if (tmp != NULL)
	{
		while (tmp != NULL)
		{
			free(tmp-next);
			tmp = tmp->next;
		}
		free(tmp);
	}
}
