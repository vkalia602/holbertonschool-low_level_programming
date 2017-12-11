#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts a  new node
 *  at a given position of a dlistint_t linked list.
 * @h: head of the doubly linked list
 * @idx: index at which node needs to be deleted
 * @n: integer data
 * Return: new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *new_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	ptr = *h;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (i < idx)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	if (ptr->next == NULL)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	else
	{
		new_node->n = n;
		new_node->next = ptr;
		new_node->prev = ptr->prev;
		ptr->prev->next = new_node;
		ptr->prev = new_node;
		return (new_node);
	}

}
