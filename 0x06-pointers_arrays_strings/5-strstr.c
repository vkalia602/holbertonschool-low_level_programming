#include "holberton.h"
/**
 *_strstr - function locates a substring needle in string haystack
 * @haystack: main string where @needle is supposed to be found
 * @needle: substring to be found
 * Return: haystack if found match, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int I, i, j;

	I = 0;
	while (haystack[I] != '\0')
	{
		i = I;
		while (needle[j] != '\0' && needle[j] == haystack[i])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (&haystack[I]);
		I++;
		j = 0;
	}
	return (NULL);
}
