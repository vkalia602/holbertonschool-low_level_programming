#include "holberton.h"
/**
 * _strlen - returns a length of the string
 * @s: string to be evaluated
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s)
	{
		l++;
		s++;
	}
	return (l);
}
/**
 * puts_half - prints half of a string followed by a new line
 * @str: pointer that points to variable str
 * Return: void
 */
void puts_half(char *str)
{
	int length;

	length = _strlen(str);

	if (length % 2 != 0)
	{
		length = (length + 1) / 2;
	}
	else
	{
		length = length / 2;
	}
	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;

	}
	_putchar('\n');
}
