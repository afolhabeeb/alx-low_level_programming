#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: integer
 *
 * Return: return the pointer
 */

void *malloc_checked(unsigned int b)
{
	void *allo;

	allo = malloc(b);
	if (allo == NULL)
	{
		exit(98);
	}

	return (allo);
}

