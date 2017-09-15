#include <stdio.h>

/**
 * main - entry point
 * Return: prints a 0 value
 */

int main(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		putchar(al);
	}
	for (al = 'A' ; al <= 'Z' ; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
