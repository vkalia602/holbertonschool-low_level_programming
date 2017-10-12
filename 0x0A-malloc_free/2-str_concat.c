#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - returns a length of the string
 * @s: string to be evaluated
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l])
	{
		l++;
	}
	return (l);
}
/**
 * *str_concat - function that concatenates two strings.
 * @s1: String 1
 * @s2: string 2
 * Return: p which has 2 strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = _strlen(s1);
	y = _strlen(s2);
	p = malloc((( x + y + 1) * sizeof(char)));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		p[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		p[i] = *s2;
		s2++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
