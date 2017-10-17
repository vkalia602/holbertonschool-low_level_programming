#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Function that prints the members of struct dog
  * @d: Name of the struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", ((d->name) == (NULL) ? "(nil)" : d->name));
		printf("Age: %f\n", ((d->age) == 0 ? 0 : d->age));
		printf("Owner: %s\n", ((d->owner) == (NULL) ? "(nil)" : d->owner));
	}
}
