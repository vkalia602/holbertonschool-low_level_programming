#include "lists.h"
/**
 * sum_list - Function that returns the sum of all the data (n) of listint_t
 * list.
 * @head: pointer to the head node.
 * Return: sum of data n or 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

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
