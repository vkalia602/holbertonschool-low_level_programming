#include "holberton.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: given initial string
 * @accept: string with bytes to match
 * Return: string from the first occurrence of s and NULL if no match found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
