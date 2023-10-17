#include "main.h"

/**
 *  puts2 - print every other xter
 *  @str: indicate string
 *
 *  Return: void
 */

void puts2(char *str)
{
	int i;
	int count;

	count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		count++;
	}
	_putchar('\n');
}
