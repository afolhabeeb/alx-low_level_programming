#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print result of the multiplication of two number
 *
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: alway return '0'
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);


	return (0);
}
