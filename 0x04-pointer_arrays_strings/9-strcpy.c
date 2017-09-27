#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - function that copies the string pointed to by src to dest
 * @src:  string to be copied
 * @dest: returns the copied string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
