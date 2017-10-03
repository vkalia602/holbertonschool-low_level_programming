#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to the array
 * @size: size of the array
 * Return: void
 */
void print_diagsums(int *a, unsigned int size)
{
	unsigned int i, sum1, sum2;

	i = 0;
	sum1 = 0;
	while (i <= (size * size))
	{
		sum1 = sum1 + a[i];
		i += (size + 1);
	}

	i = (size * size) - 1;
	sum2 = 0;
	while (i > 0)
	{
		i -= (size - 1);
		sum2 = sum2 + a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
