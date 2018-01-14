#include "hash_tables.h"
/**
 * delete_links - deletes link list in ht->array
 * @ptr: pointer to the list that needs to be deleted
 * Return: void
 */

void delete_links(hash_node_t *ptr)
{
	hash_node_t *temp;

	if (ptr == NULL)
		return;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr->key);
		free(ptr->value);
		free(ptr);
		ptr = temp;
	}
}

/**
 * hash_table_delete -  function that deletes a hash table.
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int idx = 0;

	while (idx < ht->size)
	{
		if (ht->array[idx] != NULL)
		{
			ptr = ht->array[idx];
			delete_links(ptr);
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
