#include <stdlib.h>
#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i, counter;
	int x;

	while(1)
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
