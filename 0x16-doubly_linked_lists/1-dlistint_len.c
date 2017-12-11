#include "lists.h"
/**
 * dlistint_len - Function that returns the number of elements in a linked list
 * @h: head of the linked list
 * Return: Returns number of elements in the list
 */
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
