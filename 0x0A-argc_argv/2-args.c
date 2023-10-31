#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all argument it receives
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: always '0'
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
