#include "holberton.h"
/**
 * *_memcpy -function that copies memory area
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from beginning
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		int i, j;

		i = 0;
		j = 0;
	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
