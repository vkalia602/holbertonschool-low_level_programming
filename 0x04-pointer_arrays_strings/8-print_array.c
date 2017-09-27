#include <stdio.h>
#include "holberton.h"
/**
 * print_array - function that prints n elements of an array of integers
 * @a: array
 * @n: size of array a
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
		{
			break;
		}
		printf(", ");
	}
	printf("\n");
}
