#include "main.h"

/**
 * *_memcpy -copy a string
 * @dest: an array
 * @src: is character
 * @n: is integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
