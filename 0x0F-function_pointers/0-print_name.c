#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_name - prints a name
 *
 * @name: the name to be printed
 * @f: variable to hold the string
 *
 * Return: return nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
