#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integer
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the addition  of integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts int b from a
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the substraction values of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - substracts int b from a
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the substraction values of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - substracts int b from a
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the substraction values of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - substracts int b from a
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: the substraction values of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
