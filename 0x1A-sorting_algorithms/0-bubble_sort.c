#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in
 *  ascending order using the Bubble sort algorithm
 * @array: array of integers to be sorted
 * @size: size of the @array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, counter;
	int x;

	if (size < 2)
		return;
	while (1)
	{
		counter = 0;
		for (i = 0; i < size; i++)
		{
			if (array[i] > array[i + 1] && i + 1 < size)
			{
				x = array[i];
				array[i] = array[i + 1];
				array[i + 1] = x;
				print_array(array, size);
			}
			else
				counter++;
		}
		if (counter == size)
			break;
	}
}
