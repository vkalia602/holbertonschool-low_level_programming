#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Function that prints name
 * @name: name of the person
 * @f: pointer that points to the function that prints name
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
