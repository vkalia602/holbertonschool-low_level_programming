#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints numbers from n to 98
 * @n: input number
 * Return: void
 */
void print_to_98(int n)
{
	int m;

	if (n > 98)
	{
		for (m = n; m >= 98; m--)
		{
			printf("%d", m);
			if (m == 98)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
		else
		{
				for (m = n; m <= 98; m++)
				{
					printf("%d", m);
					if (m == 98)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
		}
	printf("\n");
}
