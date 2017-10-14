#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to memory allocated to old_size
 * @old_size: size of the old memory block
 * @new_size: size of the new memory block
 * Return: memory with new size and contents of old pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr, *pointer;
	unsigned int i;

	pointer = (char *)ptr;

	if (new_size == old_size)
		return (pointer);
	if (new_size == 0 && pointer != NULL)
	{
		free(pointer);
		return (NULL);
	}
	nptr = malloc(new_size);
	if (nptr == NULL)
	{
		free(nptr);
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		nptr[i] = pointer[i];
	}
	free(ptr);
	return (nptr);


}
