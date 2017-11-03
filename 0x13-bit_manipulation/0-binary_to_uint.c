#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - Function that converts a binary number to an unsigned int
 * @b: string of binaries
 * Return: sum or 0 if char not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int i, length;

	if (b == NULL)
		return (0);

	length = strlen(b);

	i = 0;
	while (length)
	{
		if (b[length - 1] != '0' && b[length - 1] != '1')
			return (0);
		sum += ((1 << i) * (b[length - 1] - '0'));
		i++;
		length--;
	}
	return (sum);
}
