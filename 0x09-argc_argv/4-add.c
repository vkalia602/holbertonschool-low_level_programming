#include <stdio.h>
#include <stdlib.h>
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
	i = 0;
	if (argc < 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if ((atoi(argv[i])) < '0' || (atoi(argv[i])) > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
		return (0);
}
