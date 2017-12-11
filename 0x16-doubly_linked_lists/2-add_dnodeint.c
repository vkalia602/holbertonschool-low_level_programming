#include "lists.h"
/**
 * add_dnodeint - Function that adds a new node at the beginning of a
 *  dlistint_t list.
 * @head: head of the doubly linked list
 * @n: integer data of linked list
 * Return: 1 on success and -1 on failure
 */
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
