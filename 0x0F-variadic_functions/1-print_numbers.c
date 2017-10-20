#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Function that prints parameters separated with @separator.
 * @separator: separates the parameters when printed
 * @n: Number of parameters
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printnums;
	unsigned int i;

	va_start(printnums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(printnums, int));
		if (i == (n - 1))
			break;
		else if (separator == NULL)
			continue;
		else
			printf("%s", separator);
	}
	va_end(printnums);
	printf("\n");
}
