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
	size_t i, j, ln1 = 0, ln2 = 0;
	char *point, *pont;

	if (s1 == NULL || s2 == NULL)
		return (" ");

	while (s1[ln1] != NULL)
	{
		ln1++;
	}
	while (s2[ln2] != NULL)
	{
		ln2++;
	}

	point = malloc(sizeof(char) * (ln1 + ln2 + 1));

	if (point == NULL)
		free(point);
		return (NULL);


	for (i = 0; i < ln1; i++)
	{
		point[0] = s[i];
	}

	for  (j = 0; j <= ln2; j++)
	{
		point[i] = s[j];
		i++;
	}
	return (point)
}
