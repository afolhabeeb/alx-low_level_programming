#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - a function to free memory of dog
 *
 * @d: pointer to dog_t
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
