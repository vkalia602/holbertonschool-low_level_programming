#include "sort.h"

void quick_sort(int *array, size_t size)
{
	int pivot, holder;
	size_t high, i;

	pivot = array[size - 1];
	high = 0;
	for (i = 0; i < size; i++)
	{
		if (array[i] <= pivot)
		{
			holder = array[i];
			array[i] = array[high];
			array[high] = holder;
			high += 1;
			print_array(array, size);
		}
	}
}
