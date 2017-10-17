#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - Function to free memory allocated in the funtion to create new
 * dog.
 * @d: pointer to struct dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
