#include "lists.h"
/**
 * *insert_nodeint_at_index - Function that inserts a new node at a given
 * position.
 * @head: pointer that points to head of listint_t
 * @idx: index at which new node is to be added.
 * @n: int member of the struct.
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ptr, *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == '0')
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	ptr = *head;
	while (i < (idx - 1))
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	if (ptr->next == NULL)
	{
		new_node->next = NULL;
		ptr->next = new_node;
	}
	else
	{
		tmp = ptr->next;
		ptr->next = new_node;
		new_node->next = tmp;
	}
	return (new_node);

}
