#include "lists.h"

/**
 *free_list - free the list
 *
 *@head: pointer to head pointer of list
 */


void free_list(list_t *head)
{
	while (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = head->next;
	}
	free(head);
}
