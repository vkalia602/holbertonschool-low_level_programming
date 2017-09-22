#include "holberton.h"
/**
 * print_square - prints pound sign n number of times in x and y direction
 *@size: length and width of square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
