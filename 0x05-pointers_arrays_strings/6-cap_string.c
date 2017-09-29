#include "holberton.h"
/**
 *cap_string -that capitalizes all words of a string
 * @s: string to be evaluated
 *
 * Return: s.
 */
char *cap_string(char *s)
{
	char sc[] = {32, 9, 10, 44, 59, 46, 33, 43, 34, 40, 41, 123, 125};
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] -= 32;
		}
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			j = 0;
			while (sc[j])
			{
				if (sc[j] == s[i - 1])
				{
					s[i] -= 32;
					break;
				}
				j++;
			}
		}
		i++;
	}
	return (s);
}
