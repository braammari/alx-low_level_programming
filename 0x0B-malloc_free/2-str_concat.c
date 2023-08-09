#include "main.h"
/**
 * *str_concat - copy a string
 * @s1: is an array
 * @s2: is an array
 * Return: pointer NULL or copy of str
 */

char *str_concat(char *s1, char *s2)
{
	int j = 0, i, k = 0;
	char *p;

	if (s2 == NULL)
	{
		s1 = "";
	}
	if (s1 == NULL)
	{
		s2 = "";
	}
	while (s1[j] != '\0')
	{
		j++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	p = (char *)malloc(sizeof(char) * (j + k + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		*(p + i) = *(s1 + i);
	}
	for (i = j; i < j + k; i++)
	{
		*(p + i) = *(s2 + i - j);
	}
	*(p + i) = '\0';
	return (p);
}

