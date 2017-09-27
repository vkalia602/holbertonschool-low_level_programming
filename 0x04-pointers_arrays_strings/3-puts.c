#include "holberton.h"
/**
 * _puts - function that prints a string, followed by a new line
 * @str : pointer that points to the string str
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
