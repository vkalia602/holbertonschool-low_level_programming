#include "holberton.h"
/**
 * print_diagonal - prints space and \ for n number of times
 *@n: number of times spaces are printed
 * Return: void
 */

void print_diagonal(int n)
{
	int space, row;

	for (row = 0; row < n; row++)
	{
		for (space = 0; space < row; space++)
		{
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= 0)
		_putchar('\n');
}
