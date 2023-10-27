#include "main.h"

/**
 * strlen_recur - get the string length
 *
 * @s: string
 * Return: length of string
 */

int strlen_recur(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + strlen_recur(s + 1));
}

/**
 * str_compare - compare character in string
 *
 * @s: string
 * @i: smallest iterator
 * @j: largest iterator
 *
 * Return: biggest or smallest character
 */

int str_compare(char *s, char i, char j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == (j + 1))
			return (1);
		return (0 + str_compare(s, i + 1, j - 1));
	}
	return (0);
}


/**
 * is_palindrome - check if a string is a palindrome
 *
 * @s: string
 *
 * Return: return 1 0r 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (str_compare(s, 0, strlen_recur(s) - 1));
}
