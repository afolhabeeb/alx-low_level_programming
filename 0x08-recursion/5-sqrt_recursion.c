#include "main.h"

/**
 * sqrt_i - return the natual square of a number
 * @n: input number
 * @i: iterator
 * Return: sqaure root ot -1
 */

int sqrt_i(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (sqrt_i(n, i + 1));
}

/**
 * _sqrt_recursion - return the natural square root of an integer
 *
 * @n: integer
 *
 * Return: retrun the value of the square root.
 */

int _sqrt_recursion(int n)
{
	return (sqrt_i(n, 0));
}
