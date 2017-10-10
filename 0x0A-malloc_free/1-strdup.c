#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - returns a length of the string
 * @s: string to be evaluated
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s)
	{
		l++;
		s++;
	}
	return (l);
}
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
/**
 **_strdup - Function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: length of the string
 */
char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
		return (NULL);
	p = malloc((_strlen(str) * sizeof(char)) + 1);
	if (p == NULL)
		return (NULL);
	_strcpy(p, str);
	return (p);
}
