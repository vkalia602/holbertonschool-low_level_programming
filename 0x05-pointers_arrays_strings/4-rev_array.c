#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array to be reversed
 * @n: number of integers to be reversed
 * Return: length of the string
 */
void reverse_array(int *a, int n)
{
	int y, t;

	n = n - 1;
	y = 0;

	while (n > y)
	{
		t = a[n];
		a[n] = a[y];
		a[y] = t;
		n--;
		y++;
	}
}
