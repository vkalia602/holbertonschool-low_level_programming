#include "holberton.h"
/**
 * *rot13 - function that encodes a string using rot13
 * @s: character string being evaluated
 * Return: s.
 */
char *rot13(char *s)
{
	char m[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		    'L', 'M', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
		    'j', 'k', 'l', 'm'};
	char k[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		    'Y', 'Z', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
		    'w', 'x', 'y', 'z'};
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (m[j] || k[j])
		{
			if (s[i] == m[j])
			{
				s[i] = k[j];
			}
			else if (s[i] == k[j])
			{
				s[i] = m[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
