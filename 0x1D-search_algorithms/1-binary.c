#include "search_algos.h"
/**
 * print_array - Prints an array
 * @array: array to be printed
 * @left: starting point
 * @right: ending point
 * Return: void
 */
void print_array(int *array, int left, int right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		printf("%d", array[left]);
		if (left != right)
			printf(", ");
		left++;
	}
	printf("\n");
}
/**
 * binary_search -  function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: Sorted array to be searched
 * @size: size of the @array
 * @value: value to be searched in the @array
 * Return: index of the value on success, -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid;

	if (array)
	{
		left = 0;
		right = size - 1;
		while (left < right)
		{
			print_array(array, left, right);
			mid = left + ((right - left) / 2);
			if (array[mid] == value)
				return (mid);
			if (value < array[mid])
				right = mid - 1;
			if (value > array[mid])
				left = mid + 1;
		}
		print_array(array, left, right);
	}
	return (-1);
}
