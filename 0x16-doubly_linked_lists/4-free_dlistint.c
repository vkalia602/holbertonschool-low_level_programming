#include "lists.h"
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head->next;
	if (head == NULL)
		return (NULL);
	while (ptr != NULL)
	{
		free(head->next);
		free(head->prev);
		head = ptr;
		ptr = ptr->next;
	}
	free(ptr);
	free(head);
}
