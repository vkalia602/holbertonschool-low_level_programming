#include "holberton.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			d = c % 10;
			e = c / 10;
			if (c <= 9)
			{
				if (b != 0)
				{
				_putchar(' ');
				}
				_putchar('0' + c);
				if (b == 9)
				{
					break;
				}
				_putchar(',');
				_putchar(' ');
			}
			if (c > 9)
			{
			_putchar('0' + e);
			_putchar('0' + d);
			if (b == 9)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
