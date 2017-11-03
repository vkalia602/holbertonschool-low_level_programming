#include "holberton.h"
#include <stdio.h>
/**
 * set_bit - Function that sets the value of a bit to 1 at a given index.
 * @n: Number string
 * @index: given index
 * Return: 1 on success, -1 on error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > sizeof(unsigned long int) * 4)
		return (-1);

	*n = *n | (x << index);
	return (1);
}
