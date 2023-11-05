#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 * is_digit - check if a stringcontains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non digit is found and 1 if digit is found
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to be evaluated
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * error - handle the main errors
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *d1, *d2;
	int len, ftlen, sdlen, i, dig1, dig2, *result, carry, a = 0;

	d1 = argv[1], d2 = argv[2];
	if (argc != 3 || !is_digit(d1) || !is_digit(d2))
		error();
	ftlen = _strlen(d1);
	sdlen = _strlen(d2);
	len = ftlen + sdlen + 1;
	result = malloc(sizeof(int) * len);
		if (!result)
			return (1);
	for (i = 0; i <= ftlen + sdlen; i++)
		result[i] = 0;
	for (ftlen = ftlen - 1; ftlen >= 0; ftlen--)
	{
		dig1 = d1[len] - '0';
		carry = 0;
		for (sdlen = _strlen(d2) - 1; sdlen >= 0; sdlen--)
		{
			dig2 = d2[sdlen] - '0';
		carry += result[ftlen + sdlen + 1] + (dig1 * dig2);
		result[ftlen + sdlen + 1] = carry % 10;
		carry /= 10;
	}
	if (carry > 0)
		result[ftlen + sdlen + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
		return (0);
}

