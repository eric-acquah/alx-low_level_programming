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

	if (*h == NULL) /*check if list does not exist*/
		return (NULL);
	else if (idx >= list_len(*h) || idx < i)/*checking for invalid index*/
		return (NULL);
	else if (idx == 0)
	{
		newnode = add_dnodeint(h, n);/*if index is 0, insert at beginnig*/
		return (newnode);
	}

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));/*create the newnode*/
	if (newnode == NULL)
		return (NULL);/*check if malloc failed*/

	while (i < idx - 1)/*find the specified index*/
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp->next == NULL)/*if index is last index insert at the end*/
	{
		newnode = add_dnodeint_end(h, n);
		return (newnode);
	}

	/*else insert at the given position*/
	newnode->n = n;
	newnode->prev = tmp;
	newnode->next = tmp->next;
	tmp->next = newnode;
	newnode->next->prev = newnode;
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
