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
 * *_strncat - concatenates two strings using n number of bytes from src
 * @dest: string 1
 *@src:  string 2
 *@n: # of bytes that needs to be concatenate from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
		int length, i;

		i = 0;
		length = _strlen(dest);
		while (i < n && src[i] != '\0')
		{

			dest[length] = src[i];
			i++;
			length++;
		}
		dest[length] = '\0';
		return (dest);
}
