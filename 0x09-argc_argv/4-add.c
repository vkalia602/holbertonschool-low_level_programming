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
	int i, j, sum;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
			printf("Error\n");
			return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
		return (0);
}
