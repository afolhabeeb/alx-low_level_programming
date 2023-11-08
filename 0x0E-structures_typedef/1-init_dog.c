#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable type struct dog
 *
 * @d: the pointer
 * @name: the dog's name
 * @age: age of the dog
 * @owner: the name and identity of the dog owner
 *
 * Return: the new pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;

	(*d).name = name;
	d->age = age;
	d->owner = owner;

}
