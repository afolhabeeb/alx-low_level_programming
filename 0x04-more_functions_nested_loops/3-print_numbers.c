#include "main.h"

/**
 * print_numbers - print the number from 0 to 9
 *
 * Return: alway (0)
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
