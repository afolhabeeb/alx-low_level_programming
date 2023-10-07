#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: Always return 0 (Program end point)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');

	return (0);
}
