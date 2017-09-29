#include "holberton.h"
/**
 * *string_toupper - changes lowercase letters to uppercase in a string
 * @a: character array to change to uppercase
 * Return: a
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
