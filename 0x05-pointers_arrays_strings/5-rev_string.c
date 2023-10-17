#include "main.h"

/**
 *  rev_string - reverses a string
 *  @s: indicate string
 *
 *  Return: void
 */

void rev_string(char *s)
{
	int i;
	char c;
	int count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; i < count / 2; i++)
	{
		c = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = c;

	}

}
