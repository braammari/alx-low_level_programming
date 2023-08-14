#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>


/**
 * struct dog - Short description
 * @name: first basic type
 * @age: Second basic type
 *@owner: tirst basic type
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif /* MAIN_H */
