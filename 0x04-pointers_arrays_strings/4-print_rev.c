#include "holberton.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: pointer to the string s
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	while (length)
	{
		length--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
