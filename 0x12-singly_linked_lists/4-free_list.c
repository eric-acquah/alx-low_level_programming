#include "lists.h"

/**
 *free_list - free the list
 *
 *@head: pointer to head pointer of list
 */


void free_list(list_t *head)
{
	if (head)
	{
		free(head->str);
		free(head->next);
		free(head);
	}
}
