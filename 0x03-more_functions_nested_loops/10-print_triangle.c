#include "holberton.h"
/**
 * print_triangle - prints space and # for size number of times
 *@size: number of times spaces and # are printed
 * Return: void
 */
void print_triangle(int size)
{
	int row, spaces, pound;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (spaces = size - row; spaces > 1; spaces--)
				_putchar(' ');
			for (pound = 0; pound <= row; pound++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
