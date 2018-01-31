#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm.
 *
 * @array: array of integers
 * @size: Size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, x;
	int compare;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		compare = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < compare)
			{
				x = j;
				compare = array[j];
			}
		}
		if (compare != array[i])
		{
			array[x] = array[i];
			array[i] = compare;
			print_array(array, size);
		}
	}
}
