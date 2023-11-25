#include "main.h"

/**
 * set_bit - sets the value of a bit ito 1 at a gven index
 *
 * @n: pointer to the bit
 * @index: index of bit to be examined
 *
 * Return: 1 if it worked and -1 if error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= mask;

	return (1);
}
