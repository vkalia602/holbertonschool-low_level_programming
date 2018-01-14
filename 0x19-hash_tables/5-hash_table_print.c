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
	hash_node_t *p;

	if (ht == NULL)
		return;
	printf("{");
	while (idx < ht->size)
	{
		if (ht->array[idx] != NULL)
		{
			for (p = ht->array[idx]; p != NULL; p = p->next)
			{
				if (counter == 0)
					counter++;
				else
					printf(", ");
				printf("'%s': '%s'", p->key, p->value);
			}
		}
		idx++;
	}
	printf("}\n");
}
