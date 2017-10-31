#include "lists.h"
/**
 * pop_listint - function that deletes the head node of listint_t
 * @head: pointer to a pointer that point to head of listint_t
 * Return: int member of the struct.
 */
int pop_listint(listint_t **head)
{
	int holder;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	tmp = *head;
	holder = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (holder);

}
