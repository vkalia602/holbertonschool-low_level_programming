#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 * @n: The number whose sign is printed
 *
 * Return: On success 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
