#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: input number
 *
 * Return: value of n
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
	n = n * -1;
	}
	_putchar('0' + n);
	return (n);
}
