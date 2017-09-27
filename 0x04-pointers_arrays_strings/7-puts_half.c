#include "holberton.h"
/**
 * puts_half - prints half of a string followed by a new line
 * @str: pointer that points to variable str
 * Return: void
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

void puts_half(char *str)
{
	int length;

	length = _strlen(str);

	if (length % 2 != 0)
	{
		length = (length - 1) / 2;
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
