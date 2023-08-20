#include "lists.h"

/**
 *free_dlistint - free doubly linked list
 *@head: pointer to head node of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	if (head != NULL)
	{
		while (head != NULL)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}
}
