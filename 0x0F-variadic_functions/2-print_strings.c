#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - Functions that print strings from parameters
 * @separator: String to be printed between parameters
 * @n: number of parameters
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char*);
		if (s == NULL)
			printf("(nil)");
		else
		printf("%s", s);
		if (i == (n - 1))
			break;
		else if (separator == NULL)
			continue;
		else
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
