#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to be evaluated
 * @accept: bytes to be matched
 * Return: number of matched bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				i++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (i);
}
