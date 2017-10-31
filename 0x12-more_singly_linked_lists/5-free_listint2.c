#include "lists.h"
/**
 * free_listint2 - A function that free's a listint_t list.
 * @head: pointer to a pointer that point to head of list_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
	}
	free(*head);
}
