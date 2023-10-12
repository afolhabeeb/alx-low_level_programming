#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @l: is an integer input
 * Description: _putchar is used to print
 *
 * Return: always (0)
 */

int print_last_digit(int l)
{
	int i;

	if (l < 0)
	{
		i = -1 * (l % 10);
	}
	else
	{
		i = l % 10;
	}
	_putchar((i % 10) + '0');
	return (i % 10);

}
