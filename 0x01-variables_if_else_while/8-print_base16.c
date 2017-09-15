#include <stdio.h>

/**
 * main - entry point
 * Return: prints a 0 value
 */

int main(void)
{
	int a = '0';

	while( a <= '9' )
	{
		putchar(a);
		a++;
	};
	a = 'a';
	while( a <= 'f' )
	{
		putchar(a);
		a++;
	};
	putchar('\n');
	return (0);
}
