#include <stdio.h>

/**
 * main - entry point
 * Return: prints a 0 value
 */

int main(void)
{
	int a = '0';
	int b;

	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
		putchar(a);
		putchar(b);
		if (a == '9' && b == '9')
		{
			break;
		}
		putchar(',');
		putchar(' ');
		b++;
		}
	a++;

	}
	putchar('\n');
	return (0);
}
