#include "main.h"

/**
 * *_memset -copy a string
 * @s: is an array
 * @b: is character
 * @n: is integer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
return (s);
}
