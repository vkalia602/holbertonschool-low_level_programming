#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - program that adds numbers
 * @a: first integer
 * @b: second integer
 * Return: added sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - program that subtract numbers
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - program that multiplies numbers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - program that divides numbers
 * @a: first integer
 * @b: second integer
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - program that calculates remainder of 2 numbers
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
