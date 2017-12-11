#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list.
 * @h: head of the doubly linked list
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int counter = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		counter++;
	}
	return (counter);
}
