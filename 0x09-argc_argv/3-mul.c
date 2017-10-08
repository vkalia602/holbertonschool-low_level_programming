#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to be evaluated
 * Return: length of the string
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
