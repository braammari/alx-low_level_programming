#include "dog.h"


/**
 * init_dog - initialize struct dog
 * @d: First member
 * @name: Second member
 * @age: tirst membber
 * @age: forst membber
 * @owner: fivst membber
 * Description: Longer description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
