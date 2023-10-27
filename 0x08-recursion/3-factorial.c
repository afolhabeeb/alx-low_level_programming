#include "main.h"
#include <stdio.h>
/**
 * factorial - return factorial of integer
 *
 * @n: integer
 *
 * Return: return the factorial of the inputted integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
	{
		return (1);
		
	}
	return (n * factorial(n - 1));
}
