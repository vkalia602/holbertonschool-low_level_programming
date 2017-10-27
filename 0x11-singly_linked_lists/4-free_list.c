#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - A function that free a list_t list.
 * @head: pointer to a pointer that point to head of list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free (head);
}
