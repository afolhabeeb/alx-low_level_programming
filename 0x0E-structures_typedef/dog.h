#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a struct that creates a dog info
 * @name: Name of the business
 * @owner: owner of the buz
 * @age: age of the puddy
 *
 * Description: first struct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif

