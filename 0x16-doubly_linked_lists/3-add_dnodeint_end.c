#include "lists.h"
#include <stdlib.h>

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *ptr;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	ptr = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new_node;
	new_node->prev = ptr;
	return (new_node);
}
