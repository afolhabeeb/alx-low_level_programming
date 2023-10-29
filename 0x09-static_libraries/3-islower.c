#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * Descripton: use _putchar to print
 * @c: collect alphabet
 * Return: (1) if c is lowercase and (0) if false.
 */

int _islower(int c)
{
	int lower = 0;
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == c)
		{
			lower = 1;
		}
	}
	return (lower);

}
