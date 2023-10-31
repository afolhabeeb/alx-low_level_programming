#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the number of argument
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: allways '0'
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
