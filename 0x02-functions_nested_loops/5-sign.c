#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: source the digit
 *
 * Return: (1) and prints + if n is greater than zero, (0) prints 0
 * (-1)
 */


int print_sign(int n)
{
	int negt = -1;
	char xter = (char) negt;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (xter);
	}

}
