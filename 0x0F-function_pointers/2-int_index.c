#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - searches for an integer
 *
 * @cmp: pointer to function array
 * @array: array to check in for
 * @size: size of an array
 *
 * Return: integer element match, -1 if size <
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (1);
	}
	return (-1);
}
