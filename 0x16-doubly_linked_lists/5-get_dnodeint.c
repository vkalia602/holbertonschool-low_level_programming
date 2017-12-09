#include "lists.h"
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
