#include "main.h"

/**
 * init_prime - assess if its a prime number
 *
 * @i: input
 * @j: divisor
 * Return: 0
 */

int init_prime(int i, int j)
{
	if (i <= 1 || (i != j && i % j == 0))
	{
		return (0);
	}
	else if (i == j)
	{
		return (1);
	}
	return (init_prime(i, j + 1));
}
/**
 * is_prime_number - return prime number
 *
 * @n: integer
 * Return: result
 */

int is_prime_number(int n)
{
	return (init_prime(n, 2));
}
