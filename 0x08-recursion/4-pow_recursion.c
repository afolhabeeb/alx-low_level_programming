#include "main.h"

/**
 * _pow_recursion - return the value of x raised to y
 *
 * @x: the base integer
 * @y: the power integer
 *
 * Return: return the value of x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));

}
