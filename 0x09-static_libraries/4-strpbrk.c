#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: character to search
 * @accept: The pointer to the byte
 *
 * Return: pointer that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;


	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
