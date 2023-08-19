#include "lists.h"

/**
 *add_dnodeint_end - add a new node at the end of a doubly linked list
 *@head: pointer to the head pointer of the node
 *@n: data for the new created node
 *Return: pointer to newly created node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp = NULL;

	if (head == NULL)
		return (NULL);
	tmp = *head;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	/*If make new_node the first node if head is pointing to NULL*/
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	/*else Locate the last node*/
	while (tmp->next != NULL)
	{

		tmp = tmp->next;
	}

	tmp->next = new_node;/*Linking new node to list*/
	new_node->prev = tmp;
	new_node->next = NULL;

	return (new_node);
}
