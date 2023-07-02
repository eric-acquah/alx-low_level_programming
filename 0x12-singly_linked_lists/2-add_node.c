#include <string.h>
#include "lists.h"

/**
 *add_node - add a new node at the beginning of a list
 *@head: pointer to node pointer
 *@str: pointer to string in node data
 *Return: pointer to new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nxt_node;

	if (*head == NULL)
		return (NULL);

	nxt_node = (list_t *)malloc(sizeof(list_t));
	if (nxt_node == NULL)
		return (NULL);

	nxt_node->str = strdup(str);

	if (nxt_node->str == NULL)
	{
		free(nxt_node);
		return (NULL);
	}

	nxt_node->next = *head;
	*head = nxt_node;

	return (nxt_node);
}
