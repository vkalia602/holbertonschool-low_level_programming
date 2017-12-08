#include "lists.h"
#include <stdlib.h>
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = *head;
	*head = new_node;
	new_node->n = n;
	return (new_node);
}
