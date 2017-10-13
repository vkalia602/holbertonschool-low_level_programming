#include "holberton.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: Size of the array
 * @size: sizeof(void)
 * Return: array on success, NULL if nmemb or size == 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
