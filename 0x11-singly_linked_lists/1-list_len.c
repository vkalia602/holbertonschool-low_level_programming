#include "lists.h"
/**
 * list_len - Function that returns the elements in a linked list
 * @h: pointer to the starting point of a linked list
 * Return: Number of elements in a linked list.
 */
size_t list_len(const list_t *h)
{
	unsigned int counter = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
