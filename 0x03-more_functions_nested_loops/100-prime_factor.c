#include <stdio.h>
/**
 * main - prints the biggest prime number
 * Return: 0 on success
 */
int main(void)
{
	int num;
	long int x;

	x = 612852475143;
	for (num = 2; num <= x; num++)
	{
		if ((x % num) == 0)
		{
			x /= num;
			num--;
		}
	}
	printf("%d\n", num);
	return (0);
}
