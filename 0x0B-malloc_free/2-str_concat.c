#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: return the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	size_t i, j, ln1, ln2;
	char *point;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ln1 = 0;
	while (s1[ln1] != '\0')
	{
		ln1++;
	}

	ln2 = 0;
	while (s2[ln2] != '\0')
	{
		ln2++;
	}

	point = malloc(sizeof(char) * (ln1 + ln2 + 1));
	if (point == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ln1; i++)
	{
		point[i] = s1[i];
	}
	for  (j = 0; j <= ln2; j++)
	{
		point[i] = s2[j];
		i++;
	}
	return (point);
}
