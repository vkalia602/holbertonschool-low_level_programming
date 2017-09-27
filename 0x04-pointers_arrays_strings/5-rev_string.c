#include "holberton.h"
/**
 * rev_string - function that reverses a string
 * @s: pointer that points to s
 * Return: void
 */
void rev_string(char *s)
{
	char t[10];
	int x, y;

	x = 8;
	y = 0;

	while (s[y])
	{
		t[x] = s[y];
		x--;
		y++;
	}
	x = 0;
	while (*s)
	{
		*s = t[x];
		s++;
		x++;
	}
}
