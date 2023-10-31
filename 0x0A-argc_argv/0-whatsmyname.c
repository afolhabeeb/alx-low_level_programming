#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 *
 * @argc: number of argument
 * @argv: array of argument/strings
 *
 * Return: alway '0' (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

