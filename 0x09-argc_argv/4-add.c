#include <stdio.h>
#include <stdlib.h>
/**
 * _isdigit - function checks for number
 * @c: the variable to be checked
 * Return: prints a value of 1 if number, else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/**
 * main - program that adds numbers
 * @argc: argument count
 * @argv: argument string
 * Return: 0 on success, 1 on error (non integer arguments)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc < 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (_isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
		return (0);
}
