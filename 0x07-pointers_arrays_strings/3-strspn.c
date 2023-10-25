#include "main.h"

/**
 * _strspn - get lenght of the prefix substring
 *
 * @s: string to be accessed
 * @accept: the prefix to be measure
 *
 * Return: the number of byte in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byte++;
				break;
			}
			else if (accept[i + 1] == '\0')

				return (byte);

		}
		s++;
	}
	return (byte);

}
