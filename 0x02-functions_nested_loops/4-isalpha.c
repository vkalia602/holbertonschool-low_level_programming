#include "holberton.h"
/**
 * _isalpha - checks for an alphabetic character
 * @c: The character to check
 *
 * Return: On success 1.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
	return (0);
}
