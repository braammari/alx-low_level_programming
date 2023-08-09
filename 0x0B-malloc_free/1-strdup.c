#include "main.h"
/**
 * *_strdup - copy a string
 * @str: is an array
 * Return: pointer NULL or copy of str
 */

char *_strdup(char *str)
{
	int j = 0, i;

	if (str == 0)
	{
		return (NULL);
}
	while (str[j] != '\0')
	{
		j++;
	}
	char *p = (char *)malloc(sizeof(char) * (j + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		*(p + i) = *(str + i);
	}
	*(p + i) = '\0';
	return (p);
}

