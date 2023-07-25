#include "main.h"

/**
 * *_strcpy - gives the lenght of a string
 *@dest: is an array
 *@src: is integer
 * Return: always 0.
 */

char *_strcpy(char *dest, char *src)
{
int i;
int n = 0;
char t[1000];
dest = t;

while (src[n] != '\0')
{
n++;
}
for (i = 0; i < n; i++)
{
*dest[i] = *src[i];
}
return (dest);
}
