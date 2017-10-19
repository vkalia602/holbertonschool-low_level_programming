#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Performs the operation in the arguments and prints the answer
 * @argc: argument count
 * @argv: pointer to the argument string
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' && num2 == 0) || (*argv[2] == '%'  && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	f = (get_op_func(argv[2]));
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(num1, num2));
	return (0);
}
