#include "main.h"


/**
 * get_bit - retrives the value of a bit at a given index
 *
 * @n: the bit to be check
 * @index: the index of the bit being checked.
 *
 * Return: the value of the given index of a bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int value_bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	value_bit = (n & mask) != 0;

	return (value_bit);
}
