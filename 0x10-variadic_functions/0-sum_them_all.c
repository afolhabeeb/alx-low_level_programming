#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function returns all sum of integer input
 *
 * @n: integer
 *
 * Return: return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list pool;

	va_start(pool, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(pool, const unsigned int);
		}
	}
	va_end(pool);
	return (sum);

}
