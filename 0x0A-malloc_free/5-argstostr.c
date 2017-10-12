#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - returns a length of the string
 * @s: string to be evaluated
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * *argstostr - Concatonates argument to string
 * @ac: number of arguments
 * @av: arguments
 * Return: p- concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *p, charcount;
	int i, j, x;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; av[i] != '\0'; i++)
	{
		charcount += _strlen(av[i]) + 1;
		if (av[i] == NULL)
			return (NULL);
	}
	p = malloc(sizeof(char) * (charcount));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[x] = av[i][j];
			x++;
		}
		p[x] = '\n';
		x++;
	}
	p[x] = '\0';
	return (p);
}
