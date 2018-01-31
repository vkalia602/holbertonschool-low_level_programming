#include "sort.h"
#include <stdlib.h>
/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 *
 * @list: linked list of numbers
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *compare, *number, *holder;

	if (*list == NULL || list == NULL || (*list)->next == NULL)
		return;
	number = (*list)->next;
	while (holder != NULL)
	{
		holder = number->next;
		compare = number->prev;
		if (compare->n > number->n)
		{
			while (compare != NULL)
			{
				if (compare->n < number->n)
					break;
				if (number->next != NULL)
				{
					number->prev->next = number->next;
					number->next->prev = number->prev;
				}
				else
					number->prev->next = NULL;
				number->next = compare;
				if (compare->prev != NULL)
				{
					compare->prev->next = number;
					number->prev = compare->prev;
				}
				else
				{
					number->prev = NULL;
					*list = number;
				}
				compare->prev = number;
				print_list(*list);
				compare = number->prev;
			}
		}
		number = holder;
	}
}
