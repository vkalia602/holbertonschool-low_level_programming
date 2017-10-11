#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional array of
 * integers.
 * @width: rows of the grid
 * @height: columns of the grid
 * Return: p (double pointer to the grid)
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(width * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		p[i] = malloc(height * sizeof(p));
			if (p[i] == NULL)
			{
				for (; i >= 0; i--)
					free(p[i]);
				free(p);
				return (NULL);
			}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
