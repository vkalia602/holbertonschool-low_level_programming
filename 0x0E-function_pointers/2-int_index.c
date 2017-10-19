#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Function that seaches for an integer
 * @array: array to be searched for integer match
 * @size: size of the array.
 * @cmp: pointer to the function
 * Return: returns index if found match, or -1 if not.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}
	return (-1);
}
