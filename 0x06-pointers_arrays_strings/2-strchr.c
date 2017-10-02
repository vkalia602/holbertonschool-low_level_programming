#include "holberton.h"
/**
 **_strchr - function that locates a character in a string
 * @s: string
 * @c: character to be searched for in the string
 * Return: s if c found; else null.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
