#include "lists.h"
/**
 * free_listint - A function that free a listint_t list.
 * @head: a pointer that point to head of list_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
	free(head);
}
