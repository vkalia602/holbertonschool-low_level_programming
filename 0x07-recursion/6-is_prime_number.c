#include "holberton.h"
/**
 * calc - increments counter to find a multiple
 * @n: number to evaluate
 * @counter: number that might be a multiple of n
 * Return: counter
 */
int calc(int n, int counter)
{
	if (n == 2)
		return (1);
	if (n <= 1)
		return (0);
	if (n == counter)
		return (1);
	if ((n % counter) == 0)
		return (0);
	return (calc(n, (counter + 1)));
}
/**
 * is_prime_number - function that returns 1 if n is prime number
 * @n: number to evaluate
 * Return: counter
 */
int is_prime_number(int n)
{
	int counter;

	counter = 2;
	return (calc(n, counter));
}
