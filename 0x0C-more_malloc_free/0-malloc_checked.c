#include "main.h"
/**
 * *malloc_checked - check if memorie is exist
 * @b: is an integer
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
