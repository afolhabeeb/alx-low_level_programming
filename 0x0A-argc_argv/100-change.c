#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - prints minimum number of coins to make change for money
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: always return '0'
 */

int main(int argc, char **argv)
{
	int cent, coinmin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else if (cent >= 1)
			cent -= 1;
		coinmin += 1;
	}
	printf("%d\n", coinmin);

	return (0);
}
