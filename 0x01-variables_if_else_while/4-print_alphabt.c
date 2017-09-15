#include <stdio.h>

/**
 * main - Entry point
 * Functions prints alphabets without e and q
 * Return: print a 0 value
 */

int main(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		if (al == 'e' || al == 'q')
		{
			continue;
		}
		putchar(al);
	}
	putchar('\n');
	return (0);
}
