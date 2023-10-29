#include "main.h"

/**
 * _strncpy - copy a string
 *
 * @dest: first string
 * @src: second string
 * @n: the max length to copy
 *
 * Return: return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

