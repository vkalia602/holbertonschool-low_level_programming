#include "holberton.h"
/**
 * _strlen - function that finds the length of a string
 * @st: pointer that points to s
 * Return: void
 */
int _strlen(char *st)
{
	int l = 0;

	while (*st)
	{
		l++;
		st++;
	}
	return (l);
}
/**
 * rev_string - function that reverses a string
 * @s: pointer that points to
 * Return: void
 */

void rev_string(char *s)
{
	char t;
	int x, y;

	x = (_strlen(s) - 1);
	y = 0;

	while (x > y)
	{
		t = s[x];
		s[x] = s[y];
		s[y] = t;
		x--;
		y++;
	}
}
