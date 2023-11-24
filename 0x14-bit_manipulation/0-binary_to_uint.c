#include "main.h"

/**
 * binary_to_uint - converts binary to an unsigned int.
 *
 * @b: pointer to the string of 0 and 1 character.
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i;


	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result * 2 + (b[i] - '0');
	}
	return (result);
}
