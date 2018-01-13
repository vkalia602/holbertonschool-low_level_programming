#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int idx = 0;
	int counter = 0;

	printf("{");
	while (idx < ht->size)
	{
		if (ht->array[idx] != NULL)
		{
			if (counter == 0)
			{
				printf("'%s': '%s'", ht->array[idx]->key,
				       ht->array[idx]->value);
				counter++;
			}
			else
				printf(", '%s': '%s'", ht->array[idx]->key,
				       ht->array[idx]->value);
		}
		idx++;
	}
	printf("}\n");
}
