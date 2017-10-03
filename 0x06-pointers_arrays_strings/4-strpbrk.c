#include "holberton.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: given initial string
 * @accept: string with bytes to match
 * Return: string from the first occurrence of s and NULL if no match found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (NULL);
}
