#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node - Function adds a new node at the beginning of list_t list.
 * @head: pointer to a pointer that point to head of list_t
 * @str: string member of the struct.
 * Return: new node or 0 if malloc fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		printf("NULL");
		return (0);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
