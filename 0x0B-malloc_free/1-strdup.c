#include "main.h"
/**
 * *_strdup - copy a string
 * @str: is an array
 * Return: pointer NULL or copy of str
 */

char *_strdup(char *str)
{
	int j = 0, i;
	char *p = (char *)malloc(sizeof(char) * j);

	while (str[j] != '\0')
	{
		j++;
	}
	if (str == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		*(p + i) = *(str + i);
	}
	return (p);
}
