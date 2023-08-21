#include "lists.h"


/**
 *insert_dnodeint_at_index - insert a node at a given index
 *@h: pointer to to head node pointer
 *@idx: index to insert node
 *@n: data to be given to new node
 *Return: the address of the newly created node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newnode, *tmp = *h;

	if (h == NULL)
		return (NULL);
	else if (idx >= list_len(*h) || idx < i)
		return (NULL);

	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;
	}

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = tmp->next;
	newnode->prev = tmp;
	if (newnode->next != NULL)
		newnode->next->prev = newnode;
	tmp->next = newnode;

	return (newnode);
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
