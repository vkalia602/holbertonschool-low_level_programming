#include "sort.h"
#include <stdio.h>

size_t partition(int *array, size_t size, int high, int low)
{
	int i, j;
	int pivot, holder;

	pivot = array[high];
/*	printf("high- %d, low- %d\n", high, low);*/
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
	return (low);
}
void recursive_sort(int *array, size_t size, int high, int low)
{
	int parted_idx;

	if (low < high)
	{
		parted_idx = partition(array, size, high, low);
/*		printf("parted - %d, x_high- %d, x_low-%d\n", parted_idx, high, low);*/
		recursive_sort(array, size, parted_idx - 1, low);
		recursive_sort(array, size, high, parted_idx + 1);
	}
}

void quick_sort(int *array, size_t size)
{
	recursive_sort(array, size, size - 1, 0);
}
