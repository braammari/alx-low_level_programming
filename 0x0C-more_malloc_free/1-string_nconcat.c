#include "main.h"
/**
 * *string_nconcat - concatinate two strings
 * @s1: is an array
 * @s2: is an array
 * @n: is an intger
 * Return: pointer NULL or copy of str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0, i, m, k = 0;
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
	if (n < k)
	{
		m = n;
	}
	else
		m = k;
	p = (char *)malloc(sizeof(char) * (j + m + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		*(p + i) = *(s1 + i);
	}
	for (i = j; i < j + m; i++)
	{
		*(p + i) = *(s2 + i - j);
	}
	*(p + i) = '\0';
	return (p);
}
