#include "sort.h"
#include <stdlib.h>

void insertion_sort_list(listint_t **list)
{
	listint_t *compare, *number, *holder;

	holder = (*list)->next->next;
	while (holder != NULL)
	{
		number = holder->prev;
		compare = number->prev;
		if (compare->n > number->n)
		{
			while(compare != NULL)
			{
				if(compare->n < number->n)
					break;
				if (number->next != NULL)
				{
					number->prev->next = number->next;
					number->next->prev = number->prev;
				}
				else
					number->prev->next = NULL;
				if (compare->prev != NULL)
				{
					number->next = compare;
					compare->prev->next = number;
					number->prev = compare->prev;
					compare->prev = number;
				}
				else
				{
					number->next = compare;
					number->prev = NULL;
					compare->prev = number;
					*list = number;
				}
				print_list(*list);
				compare = compare->prev;
			}
		}
		holder = holder->next;
	}
}
