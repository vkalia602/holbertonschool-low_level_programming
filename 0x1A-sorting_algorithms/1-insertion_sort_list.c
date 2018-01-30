#include "sort.h"
#include <stdlib.h>

void insertion_sort_list(listint_t **list)
{
	listint_t *compare, *number, *holder, **my_list;

	my_list = list;
	compare = *list;
	number = compare->next;
	holder = number->next;

	while (holder != NULL)
	{
		while (compare != NULL)
		{
			if (compare->n < number->n && compare != number->prev)
			{
				if(number->next != NULL)
				{
					number->prev->next = number->next;
					number->next->prev = number->prev;
				}
				else
					number->prev->next = NULL;
				if (compare->prev != NULL)
				{
					number->prev = compare;
					compare->next->prev = number;
					number->next = compare->next;
					compare->next = number;
				}
				else
				{
					compare->prev = number;
					number->prev = NULL;
					*list = number;
				}
				break;
			}
			if (compare->n > number->n && compare->prev == NULL)
			{
				if(number->next != NULL)
				{
					number->prev->next = number->next;
					number->next->prev = number->prev;
				}
				else
					number->prev->next = NULL;
				compare->prev = number;
				number->prev = NULL;
				*list = number;
				break;
			}
			else
				compare = compare->prev;
		}
		my_list = list;
		print_list(*my_list);
		number = holder;
		number->prev = compare;
/*		if (holder != NULL)*/
		holder->next = holder;
	}
}
