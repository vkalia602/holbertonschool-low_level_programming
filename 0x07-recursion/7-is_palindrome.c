#include "holberton.h"
/**
 * *move - moves the pointer to the end of the string
 * @end: pointer pointing at the last char
 * Return: returns end pointer to the end of the string
 */
char *move(char *end)
{
	if (*end != '\0')
	{
	return (move(++end));
	}
	return (end);
}
/**
 * compare - function to compare the pointer values
 * @beg: pointer at the begining of the string
 * @end: pointer at the end of the string
 * Return: returns 0 if not a palindrome, 1 if a palindrome
 */

int compare(char *beg, char *end)
{
	if (*beg != *end)
		return (0);
	if (beg > end || beg == end)
		return (1);
	return (compare(++beg, --end));
}
/**
 * is_palindrome - function returns 1 if a string is a palindrome
 * @s: string to be evaluated
 * Return: returns output from move and compare functions
 */
int is_palindrome(char *s)
{
	char *end;

	end = s;
	return (compare(s, move(end) - 1));
}
