#include "main.h"
/**
 * *_strchr -copy a string
 * @s: is an array
 * @c: is character
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
return (NULL);
}
