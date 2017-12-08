#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int counter = 0;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		counter++;
	}
	return (counter);
}
