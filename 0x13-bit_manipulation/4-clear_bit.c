#include "holberton.h"
#include <stdio.h>
/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index.
 * @n: Number string
 * @index: given index
 * Return: 1 on success, -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > sizeof(unsigned long int) * 4)
		return (-1);

	*n = *n & (~(x << index));
	return (1);
}
