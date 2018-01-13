#include "hash_tables.h"
/**
 * key_index - Function that gives you the index of a key.
 * @key: string
 * @size: size of the array
 * Return: index number
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;
	return (index);
}
