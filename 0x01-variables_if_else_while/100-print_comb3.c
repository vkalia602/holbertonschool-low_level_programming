#include <stdio.h>
/**
 * main - entry point
 * Return: prints a 0 value
 */

int main(void)
{
	int a;
	int b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
					break;
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;

	}
	putchar('\n');
	return (0);
}
