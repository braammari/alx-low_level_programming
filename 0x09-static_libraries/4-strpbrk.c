#include "main.h"
/**
 * *_strpbrk - copy a string
 * @s: is an array
 * @accept: is character
 * Return: s or O
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
return (0);
}

