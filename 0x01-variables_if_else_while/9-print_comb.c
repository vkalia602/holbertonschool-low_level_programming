#include <stdio.h>

/**
 * main - entry point
 * Return: prints a 0 value
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		if (a == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
