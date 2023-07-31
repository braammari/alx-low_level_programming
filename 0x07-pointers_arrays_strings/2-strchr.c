#include "main.h"
/**
 * *_strchr -copy a string
 * @s: is an array
 * @c: is character
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
return (NULL);
}
