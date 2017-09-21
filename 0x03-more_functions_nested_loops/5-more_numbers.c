#include "holberton.h"
/**
 * more_numbers - prints numbers 1-14
 * Return: void
 */
void more_numbers(void)
{
	int i, j, l;

	for (l = 0; l < 10; l++)
	{
	for (i = '0'; i <= '1'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i == '1' && j == '5')
			{
				break;
			}
			if (i > '0')
			{
			_putchar(i);
			}
			_putchar(j);
		}
	}
	_putchar('\n');
	}
}
