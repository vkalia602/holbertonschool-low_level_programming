#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: Number
 * @index: index of the bit to be returned
 * Return: Value of the bit at that index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 0;

	if (index > (sizeof(unsigned long int) * 4))
		return (-1);

	x = n >> index;
	if (x & 1)
		return (1);
	else
		return (0);
}
