#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that deletes the node at index @index
 * of a dlistint_t linked list.
 * @head: head of the doubly linked list
 * @index: index at which node needs to be deleted
 * Return: 1 on success and -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *ptr;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		ptr->prev = *head;
		if (ptr->next == NULL)
		{
			free(ptr);
			*head = NULL;
			return (1);
		}
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	else
	{
		while (i < index)
		{
			if (ptr == NULL)
				return (-1);
			i++;
			ptr = ptr->next;
		}
		ptr->next->prev = ptr->prev;
		ptr->prev->next = ptr->next;
		free(ptr);
		return (1);
	}
}
