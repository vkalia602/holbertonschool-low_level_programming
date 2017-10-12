#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns a length of the string
 * @s: string to be evaluated
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
/**
 * *string_nconcat - Concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of string 2 to be considered
 * Return: pointer with concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int strlen1, strlen2, i, j;

	strlen1 = strlen2 = i = j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s1 = "";
	strlen1 = _strlen(s1);
	strlen2 = _strlen(s2);
	if (n <= strlen2) /*make string length s2 = n */
		strlen2 = n;
	else
		strlen2 = _strlen(s2);
/*Allocating memory for s1 + s2 */
	ptr = malloc(((strlen1 + strlen2) * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0') /*copying string 1 to pointer*/
	{
		ptr[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (i <= strlen2) /*copying string 2*/
	{
		ptr[j] = s2[i];
		i++;
		j++;
	}
	return (ptr);
}
