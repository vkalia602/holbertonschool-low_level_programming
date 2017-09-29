#include "holberton.h"
/**
 * *leet - function that encodes a string into 1337
 * @s: character string being evaluated
 * Return: s.
 */
char *leet(char *s)
{
	char m[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char k[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	i = 0;
	while (s[i] != 0)
	{
		j = 0;
		while (m[j])
		{
			if (s[i] == m[j])
			{
				s[i] = k[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
