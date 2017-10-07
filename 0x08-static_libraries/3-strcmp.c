#include "holberton.h"
/**
 *_strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: k
 */
int _strcmp(char *s1, char *s2)
{
	int i, k;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] < s2[i] || s1[i] > s2[i])
	{
		k = s1[i] - s2[i];
	}
	else
	{
		k = 0;
	}
	return (k);
}
