#include <stdio.h>

/**
 * main - Entry point
 * prints numbers in base 10
 * Return: prints a 0 value (success)
 */

int main(void)
{
	int a;

	for (a = '0' ; a <= '9' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
