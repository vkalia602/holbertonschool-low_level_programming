#include "lists.h"
/**
 * *add_nodeint - Function adds a new node at the beginning of list_t list.
 * @head: pointer to a pointer that point to head of list_t
 * @n: int member of the struct.
 * Return: new node or 0 if malloc fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
