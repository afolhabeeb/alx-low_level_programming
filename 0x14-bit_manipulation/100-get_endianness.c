#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * Return: the value of endianness
 */

int get_endianness(void)
{
	unsigned int no = 1;
	char *ptr = (char *)&no;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
