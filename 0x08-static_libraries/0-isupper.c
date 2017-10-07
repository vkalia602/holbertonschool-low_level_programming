#include "holberton.h"
/**
 * _isupper - function checks for the uppercase character
 * @c: the character to be checked
 * Return: prints a value of 1 if upercase, else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
