#include "variadic_functions.h"

/**
 * print_strings - function prints string followed by a str
 *
 * @separator: the pointer to separator
 * @n: number of string characters
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *wrd;

	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		wrd = va_arg(str, char*);

		if (str == NULL)
			printf("(nil)");
		else
		{
			printf("%s", wrd);
		}

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(str);


}

