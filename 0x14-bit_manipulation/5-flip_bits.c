#include "main.h"

/**
 * flip_bits - prints the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: number 1
 * @m: number 2
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int cnt = 0;

	for (; result != 0; result >>= 1)
		cnt += result & 1;

	return (cnt);
}
