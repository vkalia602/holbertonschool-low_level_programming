#include "holberton.h"
/**
 * calc - increments counter to find matching square
 * @n: number to find natural square root of
 * @counter: number that is square root of n
 * Return: counter
 */
int calc(int n, int counter)
{
	if (n < (counter * counter))
		return (-1);
	if (n < 0)
		return (-1);
	if (n == (counter * counter))
		return (counter);
	return (calc(n, (counter + 1)));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to find natural square root of
 * Return: counter
 */

int _sqrt_recursion(int n)
{
	int counter;

	counter = 1;
	return (calc(n, counter));
}
