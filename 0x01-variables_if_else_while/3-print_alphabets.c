#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: End point
 */
int main(void)
{
	char i = 'a';
	char I = 'A';

	while (i <= 'z')
	{
		putchar(i);
	i++;
	}

	while (I <= 'Z')
	{
		putchar(I);
	I++;
	}

	putchar('\n');

	return (0);
}
