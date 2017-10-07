#include "holberton.h"
/**
 * *_memset -function that fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes from beginning
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
