#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: first pointer
 * @b: second pointer
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
