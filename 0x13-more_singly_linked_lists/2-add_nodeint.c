#include "lists.h"

/**
 *add_nodeint - add a new node at the beginning of a list
 *@head: pointer to head pointer of list
 *@n: node data element
 *Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh_node;

	/*Creating a new node*/
	fresh_node = (listint_t *)malloc(sizeof(listint_t));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;/*Assinging data to data feild*/

	fresh_node->next = *head;
	*head = fresh_node;/*Linking node to list*/

	return (fresh_node);
}
