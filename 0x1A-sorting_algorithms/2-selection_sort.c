#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t i, j, x;
	int num;

	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			if (array[i] > array[j])
				x = j;
		}
		num = array[i];
		array[i] = array[x];
		array[x] = num;
		print_array(array, size);
	}
}
