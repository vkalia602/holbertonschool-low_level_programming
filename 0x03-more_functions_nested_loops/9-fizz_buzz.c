#include <stdio.h>
/**
 * main- prints numbers 1-100
 * prints fizz for multiples of 3
 * prints buzz for multiples of 5
 *prints fizzbuzz for multiples of 3 and 5
 * Return: 0 on success
 */
int main(void)
{
	int i, k, l, j;

	for (i = 1; i <= 100; i++)
	{
	j = i % 15;
	k = i % 3;
	l = i % 5;
		if (j == 0)
		{
			printf("FizzBuzz");
		}
		else if (k == 0)
		{
			printf("Fizz");
		}
		else if (l == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	if (i != 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
