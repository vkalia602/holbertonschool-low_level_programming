#include "lists.h"
/**
 * delete_nodeint_at_index -unction that deletes the node at index index
 * of a listint_t linked list.
 * @head: pointer to a pointer that points to the head of listint_t
 * @index: node that should be deleted
 * Return: 1 on success and -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp, *d_ptr;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		temp = ptr->next;
		free(ptr);
		*head = temp;
		return (1);
	}
	while (i < (index - 1) && ptr != NULL)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
		i++;
	}
	d_ptr = ptr->next;
	temp = d_ptr->next;
	free(d_ptr);
	ptr->next = temp;
	return (1);
}
