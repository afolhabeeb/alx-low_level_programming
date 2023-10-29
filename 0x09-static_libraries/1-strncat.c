#include "main.h"

/**
 * _strncat - concatenate two string at most n byte
 *
 * @dest: destination string
 * @src: source string
 * @n: string length
 *
 * Return: return a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, destcount = 0, srccount = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		srccount++;
	}
	for (i = 0; dest[i] != '\0'; i++)
	{
		destcount++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[destcount + i] = *src;
		src++;
	}
	dest[destcount + i] = '\0';
	return (dest);

}
