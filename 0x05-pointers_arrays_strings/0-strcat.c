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
 * *_strcat - function that concatenates two strings
 * @dest: string 1
 *@src:  string 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int length, i;

	i = 0;
	length = _strlen(dest);
	while (src[i])
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
