#include "lists.h"
/**
 * free_dlistint - Function that free a dlistint_t list.
 * @head: head of the doubly linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head->next;
	if (head == NULL)
		return;
	while (ptr != NULL)
	{
		free(head);
		head = ptr;
		ptr = ptr->next;
	}
	free(head);
	free(ptr);
}
