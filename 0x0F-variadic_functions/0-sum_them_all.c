#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Function that returns sum of all parameters
 * @n: number of parameters.
 * Return: Sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list addition;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(addition, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(addition, int);
	}
	va_end(addition);

	return (sum);
}
