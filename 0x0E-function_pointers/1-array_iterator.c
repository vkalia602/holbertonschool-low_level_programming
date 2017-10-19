#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: array to be printed from
 * @size: size of the array.
 * @action: pointer to the function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
