#include "lists.h"
#include <stdlib.h>

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
