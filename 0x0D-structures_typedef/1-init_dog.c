#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function to initialize a variable in struct dog
 * @d:  name of the struct
 * @name: First member
 * @age: Second member
 * @owner:  Third member
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
