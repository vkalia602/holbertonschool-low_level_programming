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
	int i, sum, temp;

	i = 0;
	sum = 0;
	temp = 0;
	while (i <= (size * size))
	{
		temp = a[i];
		sum = sum + temp;
		i += (size + 1);
	}
	printf("%d, ", sum);

	i = (size * size) - 1;
	sum = 0;
	temp = 0;
	while (i > 0)
	{
		i -= (size - 1);
		temp = a[i];
		sum = sum + temp;
	}
	printf("%d\n", sum);
}
