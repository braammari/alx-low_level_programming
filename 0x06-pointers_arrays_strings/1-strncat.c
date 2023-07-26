#include "main.h"

/**
 * *_strcat - gives the lenght of a string
 * @dest: is an array
 * @src: is an array
 * @n: is integer
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
char *copdest = dest;

while (*copdest != '\0')
{
	copdest++;
}
while (*src != '\0')
{
	if (i < n)
	{
		*copdest = *src;
	}
	copdest++;
	src++;
	i++;
}
*copdest = '\0';

return (dest);
}
