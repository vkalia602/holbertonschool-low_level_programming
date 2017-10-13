#include "holberton.h"
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers.
 * @min: min number of array
 * @max: max number of array
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, x;

	x = 0;
	if (min > max)
		return (NULL);
	x = (max - min) + 1;
	ptr = malloc(x * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
