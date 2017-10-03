#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to the array
 * @size: size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, temp, sum2;

	i = 0;
	sum1 = 0;
	temp = 0;
	while (i <= (size * size))
	{
		temp = a[i];
		sum1 = sum1 + temp;
		i += (size + 1);
	}

	i = (size * size) - 1;
	sum2 = 0;
	temp = 0;
	while (i > 0)
	{
		i -= (size - 1);
		temp = a[i];
		sum2 = sum2 + temp;
	}
	printf("%d, %d\n", sum1, sum2);
}
