#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a
 *  dlistint_t linked list.
 * @head: head of the doubly linked list
 * @index: index at which node needs to be deleted
 * Return: node at the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	ptr = head;
	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
