#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - a new struct dog function
 *
 * @name: new name of the dog
 * @owner: new owner property
 * @age: the new age property
 *
 * Return: the pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	size_t i, j, l;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		;
	i++;
	dog->name = malloc(sizeof(char) * i);
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		dog->name[j] = name[j];
	dog->age = age;

	for (l = 0; owner[l] != '\0'; l++)
		;
	l++;
	dog->owner = malloc(sizeof(char) * l);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (j = 0; j < l; j++)
		dog->owner[j] = owner[j];

	return (dog);

}
