#include "lists.h"

/**
 *add_nodeint_end - add a new node at the end of a list
 *@head: pointer to pointer to list
 *@n: data element of node
 *Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh_node, *trival;

	/*temp pointer to ensure link is not lost using head for traversal*/
	trival = *head;

	fresh_node = (listint_t *)malloc(sizeof(listint_t));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;/*assign data to data field of the new node*/
	fresh_node->next = NULL;/*NULL because new node becomes last node in list*/

	if (*head == NULL)
		*head = fresh_node;
	else
	{
		while (trival->next != NULL)
		{
			trival = trival->next;/*locate the last node*/
		}

		trival->next = fresh_node;/*this makes the new node the last in list*/
	}

	return (fresh_node);
}
