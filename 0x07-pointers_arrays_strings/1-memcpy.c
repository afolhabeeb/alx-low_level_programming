#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: string one
 * @src: source string
 * @n: integer to use
 *
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
