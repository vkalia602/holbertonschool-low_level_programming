#include <stdio.h>

/**
 *main - Entry point
 *prints alphabets in reverse
 * Return: print a 0 value
 */

int main(void)
{
	char la;

	for (la = 'z' ; la >= 'a' ; la--)
	{
		putchar(la);
	}
	putchar('\n');
	return (0);
}
