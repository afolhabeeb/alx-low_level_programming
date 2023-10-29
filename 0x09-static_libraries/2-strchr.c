#include "main.h"

/**
 * _strchr - find scharacter ina a string
 *
 * @s: character one
 * @c: character 2
 *
 * Return: a pointer to the first occurence of the character c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
