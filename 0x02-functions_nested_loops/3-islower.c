#include "holberton.h"
/**
 * _islower - function checks for the lowercase character
 * @c: the character to be checked
 * Return: prints a value of 1 if lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
