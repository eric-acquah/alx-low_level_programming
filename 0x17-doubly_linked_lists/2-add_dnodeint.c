#include "lists.h"

/**
 *add_dnodeint - add a new node at the beginning of a doubly linked list
 *@head: pointer to the head pointer
 *@n: data to be stored in the new node
 *Return: address of the newly added node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;/*Linking node to list*/

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
