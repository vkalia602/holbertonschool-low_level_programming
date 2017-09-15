#include <stdio.h>

/**
 * main -Entry point
 * prints numbers in base 10
 * Return: print a value of 0 (success)
 */

int main(void)
{
	int a;
	int b = 9;

	for (a = 0; a <= b; a++)
	{
		printf("%d", a);
	}
	printf("\n");
	return (0);
}
