#include <stdio.h>

/**
 * main - print 1 to 100 and fizz when at multiple of 3
 * buzz at multiple of 5 and
 * fizz buzz at the multiple of both
 *
 * Return: Alway (0)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		printf("\n");

	}
	return (0);
}
