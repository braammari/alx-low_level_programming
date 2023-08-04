#include "main.h"

/**
 * _strcmp -copy a string
 * @s1: is an array
 * @s2: is an array
 * Return: dest.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
return (*s1 - *s2);
}
