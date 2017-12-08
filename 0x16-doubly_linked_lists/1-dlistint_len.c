#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	unsigned int counter = 0;

	ptr = h;

	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
