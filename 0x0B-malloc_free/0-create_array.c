#include "main.h"
/**
 * *create_array - copy a string
 * @c: is an array
 * @size: is an integer
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	char *p = (char *) malloc(size * sizeof(char));

	if (*p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
}

