#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	array = malloc(sizeof(void *) * size);
	if (array == NULL)
		return (NULL);
	ht->array = array;
	ht->size = size;

	return (ht);

}
