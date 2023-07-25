#include "main.h"

/**
 * *_strcpy - gives the lenght of a string
 *@dest: is an array
 *@src: is integer
 * Return: always 0.
 */

char *_strcpy(char *dest, char *src)
{
char *copdest;
copdest = dest;

while (*src != '\0')
{
	*dest = *src;
	src++;
	dest++;
}
*dest = '\0';

return (copdest);
}
