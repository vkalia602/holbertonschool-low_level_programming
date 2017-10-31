#include "lists.h"
/**
 * print_listint - Function prints the elements of a listint_t list
 * @h: pointer to the starting point of a linked list
 * Return: number of nodes or 0 in case of Null pointer
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
