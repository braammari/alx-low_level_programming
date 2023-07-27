#include "main.h"

/**
 * *string_toupper -copy a string
 * @str: is an array
 * Return: a
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
return (str);
}
