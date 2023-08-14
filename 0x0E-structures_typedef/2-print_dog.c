#include "dog.h"


/**
 * print_dog - initialize struct dog
 * @d: First member
 * Description: Longer description
 */


void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
