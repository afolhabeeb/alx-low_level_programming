#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * ch_free_grid - main etry
 *
 * @grid:input
 * @height: input
 */

void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL || height != 0)
	{
		for (; height > 0; height--)
		{
			free(grid[height]);
			free(grid);
		}
		free(grid);
	}

}
/**
* strtow - splits a string in two words
*
* @str: string tp be splitted
*
* Return: resturn splitted strnig
*/

char **strtow(char *str)
{
	size_t i, j, c, height, al;
	char **aout;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		{
			height++;
			aout = malloc(sizeof(char *) * (height + 1));
		}
		if (aout == NULL)
		{
			free(aout);
			return (NULL);
		}
	}

	for (i = al = 0; i < height; i++)
	{
		for (c = al; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
			{
				al++;
			}
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[i] = malloc((c - al + 2) * sizeof(char));
				if (aout[i] == NULL)
				{
					ch_free_grid(aout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; al <= c; al++, j++)
			aout[i][j] = str[al];
		aout[i][j] = '\0';
	}
	aout[i] = NULL;
	return (aout);

}
