#include "holberton.h"
/**
 * print_alphabet_x10 - writes alphabets a-z x10 to stdout
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char a;
	char b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
