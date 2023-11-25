#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number to be represented
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	char bin;
	int i = 0;


	for (; mask > 0; mask >>= 1)
	{
		if ((n & mask) != 0)
			i = 1;

		if (i)
		{
			if ((n & mask) != 0)
				bin = '1';
			else
				bin = '0';
			write(1, &bin, 1);
		}
	}
	if (!i)
		write(1, "0", 1);
}
