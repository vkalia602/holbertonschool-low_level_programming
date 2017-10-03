#include "holberton.h"
/**
 * set_string - sets the value of a pointer to char
 * @s: pointer to a pointer of char
 * @to: char value to be pointed at
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
