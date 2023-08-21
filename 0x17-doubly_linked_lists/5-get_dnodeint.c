#include "lists.h"

/**
 *get_dnodeint_at_index - return the element found at a given index
 *@head: pointer to the head node
 *@index: the position of an element
 *Return: the element at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (index < i)
		return (NULL);
	else if (index == i)
		return (tmp);
	else if (index >= list_len(head))
		return (NULL);

	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
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
