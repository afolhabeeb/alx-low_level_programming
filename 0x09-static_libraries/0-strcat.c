#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenate two strings
 *
 * @dest: indicate destination string
 * @src: indicates source string
 *
 * Return: no return
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int scount;
	int dcount;

	scount = 0;
	dcount = 0;


	for (i = 0; dest[i] != '\0'; i++)
	{
		dcount++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		scount++;
	}
	for (i = 0; i <= scount; i++)
	{
		dest[dcount + i] = src[i];
	}
	return (dest);
}
