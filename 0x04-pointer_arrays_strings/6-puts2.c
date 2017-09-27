#include "holberton.h"
/**
 * puts2 - unction that prints one char out of 2 of a string
 * @str: pointer to the variable str
 * Return: void
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar ('\n');
}
