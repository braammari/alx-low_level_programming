#include "main.h"

/**
 * *_strcat - gives the lenght of a string
 *@dest: is an array
 *@src: is integer
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
char *copdest = dest;

while (*copdest != '\0')
{
	copdest++;
}
while (*src != '\0')
{
	*copdest = *src;
	copdest++;
	src++;
}
*copdest = '\0';

return (dest);
}
