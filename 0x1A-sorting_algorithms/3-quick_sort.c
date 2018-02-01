#include "sort.h"
#include <stdio.h>

size_t partition(int *array, size_t size, size_t high, size_t low)
{
	size_t i;
	int pivot, holder;

	pivot = array[high];
	printf("high- %lu, low- %lu\n", high, low);
	for (i = low; i <= high; i++)
	{
		if (array[i] <= pivot)
		{
			holder = array[i];
			array[i] = array[low];
			array[low] = holder;
			print_array(array, size);
			low++;
		}
	}
	if (array[high] < array[low])
	{
		holder = array[i];
		array[i] = array[low];
		array[low] = holder;
		print_array(array, size);
	}
	return (low);
}
void recursive_sort(int *array, size_t size, size_t high, size_t low)
{
	size_t parted_idx;

	if (low < high)
	{
		parted_idx = partition(array, size, high, low);
		printf("parted - %lu, x_high- %lu, x_low-%lu\n", parted_idx, high, low);
		recursive_sort(array, size, parted_idx - 1, low);
		recursive_sort(array, size, high, parted_idx + 1);
	}
}

void quick_sort(int *array, size_t size)
{
	recursive_sort(array, size, size - 1, 0);
}
