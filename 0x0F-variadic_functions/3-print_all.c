#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints all the parameters according to their format
 * @format: format of the incoming parameters
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ag;
	unsigned int i = 0;
	char *s;

	va_start(ag, format);
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(ag, int));
			break;
		case 'i':
			printf("%d", va_arg(ag, int));
			break;
		case 'f':
			printf("%f", va_arg(ag, double));
			break;
		case 's':
			s = va_arg(ag, char*);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			continue;
		}
		if (format[i])
		printf(", ");
	}
	printf("\n");
	va_end(ag);
}
