#include "holberton.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: difference in the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int index = 0;

	x = n ^ m;
	while (x > 0)
	{
		if (x & 1)
			index++;
		x = x >> 1;
	}
	return (index);
}
