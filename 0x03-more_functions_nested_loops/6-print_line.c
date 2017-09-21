#include "holberton.h"
/**
 * print_line - printing underscore n number of times
 * @n: number of times the underscore needs printing
 * Return: 0 on success
 */
void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
