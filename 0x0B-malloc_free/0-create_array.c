#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 *
 * @size: size type
 * @c: memory allocation address
 *
 * Return: return void
 */

char *create_array(unsigned int size, char c)
{
	size_t i = 0;
	char *point;

	if (size == 0)
		return (NULL);

	point = malloc(sizeof(char) * size);

	if (point == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		point[i] = c;

	return (point);
}
