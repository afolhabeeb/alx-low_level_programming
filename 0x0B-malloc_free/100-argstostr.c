#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 *
 * @ac: integer arg size
 * @av: string
 *
 * Return: Concatenate
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_len = 0;

	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]);
	}


	str = malloc(sizeof(char) * (total_len + ac));

	if (str == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < ac; i++)
	{
		strcat(str, av[i]);
		strcat(str, "\n");
	}

	return (str);
}
