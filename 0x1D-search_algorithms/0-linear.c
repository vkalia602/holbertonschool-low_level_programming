#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Function that seaches for a value in an array of integers
 * using linear search algorithms.
 * @array: array of integers
 * @size: size of the @array
 * @value: value to be searched for in the array
 * Return: index where the element was found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;
	int num;

	if (array == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		num = array[index];
		if (num == value)
			return (index);
		printf("Value checked array[%lu] = [%d]\n", index, num);
	}
	return (-1);
}
