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
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
