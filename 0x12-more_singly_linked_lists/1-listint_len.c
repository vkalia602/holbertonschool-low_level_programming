#include "lists.h"
/**
 * listint_len - Function that returns the elements in a linked list
 * @h: pointer to the starting point of a linked list
 * Return: Number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
