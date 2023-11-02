#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 *
 * @str: memory allocation address pointer
 *
 * Return: return void
 */

char *_strdup(char *str)
{
	size_t i, j;
	char *stralt;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	stralt = malloc(sizeof(char) * (i + 1));

	if (stralt == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		stralt[j] = str[j];
	}
	return (stralt);
}
