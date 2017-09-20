#include "holberton.h"
/**
 * print_alphabet - writes alphabets from a to z
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
