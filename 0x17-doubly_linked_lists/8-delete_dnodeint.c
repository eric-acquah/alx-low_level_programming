#include "lists.h"

/**
 *delete_dnodeint_at_index - delete a node at a given index
 *@index: position at which node should be deleted
 *Return: 1 if successful esle 0
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp1, *tmp = *head;

	if (*head == NULL)
		return (-1);
	else if (index >= list_len(tmp) || index < i)
		return (-1);

	if (index == 0) /*if index is head node, set next node prev to NULL*/
	{/*before deletion*/
		tmp1 = tmp;
		tmp = tmp->next;
		if (tmp != NULL)
			tmp->prev = NULL;
		free(tmp1);
		*head = tmp;
		return (1);
	}
	while (i < index - 1)
	{
		tmp = tmp->next;
		i++;
	}
	tmp1 = tmp;

	if (tmp->next == NULL)/*if index is the tail node, set previous to NULL */
	{/*before deletion*/
		tmp->prev->next = NULL;
		free(tmp1);
		return (1);
	}

	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp1);

	return (1);
}

/**
 *list_len - return the length of a
 *@head: pointer to head node
 *Return: the number of elements in a list
 */

unsigned int list_len(dlistint_t *head)
{
	dlistint_t *tmp = head;
	unsigned int len = 1;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}
