#include "holberton.h"
/**
 * _strlen - returns a length of the string
 * @s: string to be evaluated
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s)
	{
		l++;
		s++;
	}
	return (l);
}
