#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - chack if integer is positive ornegative
 * @i: indicates the integer
 * Return: Always (0)
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}

}
