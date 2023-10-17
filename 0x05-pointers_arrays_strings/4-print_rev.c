#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: indicate string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (i = count - 1; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
