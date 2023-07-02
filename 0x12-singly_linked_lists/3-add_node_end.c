#include "lists.h"

/**
 *add_node_end - append a new element to the list
 *@head: pointer to head pointer of the list
 *@str: string data of new node
 *Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nxt_node, *end_node;
	end_node = *head;

	nxt_node = (list_t *)malloc(sizeof(list_t));
	if (nxt_node == NULL)
		return (NULL);

	nxt_node->str = strdup(str);
	if (nxt_node->str == NULL)
	{
		free(nxt_node);
		return (NULL);
	}

	nxt_node->len = strlen(str);
	nxt_node->next = NULL;

	if (*head == NULL)
	{
		*head = nxt_node;
		return (nxt_node);
	}

	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}

	end_node->next = nxt_node;

	return (nxt_node);
}
