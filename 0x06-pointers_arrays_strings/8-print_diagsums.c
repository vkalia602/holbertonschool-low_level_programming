#include "holberton.h"
#include <stdio.h>


void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	i = 0;
	sum1 = 0;
	while (i < (size * size))
	{
#ifdef __DEBUG
		printf("B i = %d - a[i] = %d -  sum1 = %d\n", i, a[i], sum1);
#endif
		sum1 = sum1 + a[i];
		i += (size + 1);
#ifdef __DEBUG
		printf("E i = %d -  sum1 = %d\n", i, sum1);
#endif
	}

	i = (size * size) - 1;
	sum2 = 0;
	while (i > size)
	{
		i -= (size - 1);
#ifdef __DEBUG
		printf("M i = %d - a[i] = %d -  sum2 = %d\n", i, a[i], sum2);
#endif
		sum2 = sum2 + a[i];
#ifdef __DEBUG
		printf("E i = %d -  sum2 = %d\n", i, sum2);
#endif
	}
	printf("%d, %d\n", sum1, sum2);
}
