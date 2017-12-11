#include "lists.h"
/**
 * sum_dlistint - Function that returns the sum of all the data (n) of a
 *  dlistint_t linked list.
 * @head: head of the doubly linked list
 * Return: Sum of data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
