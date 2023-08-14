#include "dog.h"


/**
 * *new_dog - initialize struct dog
 * @name: First member
 * @age: First member
 * @owner: First member
 * Return: array p
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = (dog_t *)malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	(*p).age = age;
	(*p).name = name;
	(*p).owner = owner;
	return (p);
}
