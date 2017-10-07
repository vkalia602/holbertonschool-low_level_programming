#include "holberton.h"
/**
 * _isdigit - function checks for number
 * @c: the variable to be checked
 * Return: prints a value of 1 if number, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
