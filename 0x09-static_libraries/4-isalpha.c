#include "main.h"

/**
 * _isalpha - check for alphabetic character
 *
 * Description: _putchar is used to prints
 * @c: collect alphabet
 *
 * Return: (1) if c is a letter, lowercase or uppercae (0) if otherwise
 */

int _isalpha(int c)
{
	int letter = 0;
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);

}
