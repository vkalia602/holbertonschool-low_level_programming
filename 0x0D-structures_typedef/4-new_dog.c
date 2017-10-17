#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns a length of the string
 * @s: string to be evaluated
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
/**
 * *_strcpy - function that copies the string pointed to by src to dest
 * @src:  string to be copied
 * @dest: returns the copied string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * *new_dog - Creates a new dog
 * @name: first member of the struct- name of the new dog
 * @age: second member of the struct - age of the new dog
 * @owner: third member of the struct - name of the owner
 * Return: pointer that points to new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *copyname, *copyowner;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	copyname = malloc((_strlen(name) + 1) * sizeof(char));
	if (copyname == NULL)
	{
		free(ptr);
		free(copyname);
		return (NULL);
	}
	copyowner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (copyowner == NULL)
	{
		free(ptr);
		free(copyname);
		free(copyowner);
		return (NULL);
	}
	_strcpy(copyname, name);
	_strcpy(copyowner, owner);

	ptr->name = copyname;
	ptr->age = age;
	ptr->owner = copyowner;
	return (ptr);
}
