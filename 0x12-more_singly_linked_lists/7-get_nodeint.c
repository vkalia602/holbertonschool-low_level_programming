#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list
 * @head: pointer that points to head of list_t
 * @index: nth node of the linked list
 * Return: node at index or NULL if no node at index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = head;
	while (i <= index)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	return (ptr);

}
