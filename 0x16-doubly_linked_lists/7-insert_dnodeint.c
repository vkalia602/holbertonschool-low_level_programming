#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (i < idx)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr = NULL)
		return (NULL);
	else if (ptr->next = NULL)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	else

	new_node->next = ptr;
	new_node->prev = ptr->prev;

}
