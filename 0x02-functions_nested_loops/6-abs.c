#include "holberton.h"
/**
 * _abs - finds the absolute value of a number
 * @n: The number in the function
 *
 * Return: the value of n on success
 */
int _abs(int n)
{
	if (n < 0)
	{
		(n = n * -1);
	}
	return (n);
}
