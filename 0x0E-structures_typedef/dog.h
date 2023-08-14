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
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* MAIN_H */
