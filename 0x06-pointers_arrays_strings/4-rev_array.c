#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: first integer
 * @n: second ineteger
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
