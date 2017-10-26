#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - Function prints the elements of a list_t list
 * @h: pointer to the starting point of a linked list
 * Return: number of nodes or 0 in case of Null pointer
 */
size_t print_list(const list_t *h)
{
	unsigned int counter = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
