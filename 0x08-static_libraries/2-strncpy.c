#include "holberton.h"
/**
 * *_strncpy - function that copies n characters of string src to dest
 * @src:  string to be copied
 * @dest: returns the copied string
 * @n: number of characters to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
		i++;
	}

	return (dest);
}
