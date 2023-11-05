#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory using malloc and free
 *
 * @ptr: pointer for realloc
 * @old_size: old pointer size
 * @new_size: the new pointer size
 *
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t i, max = new_size;
	char *p;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
			return (p);
		
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;

	for (i = 0; i < max; i++)
		p[i] = oldp[i];
	free(ptr);
	return (p);
}
