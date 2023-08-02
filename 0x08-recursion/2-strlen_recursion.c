#include "main.h"

/**
 * _strlen_recursion - print string
 * @s: is an array
 * Return: i
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		s++;
		i = _strlen_recursion(s) + 1;
	}
	else
	{
		return (0);
	}
return (i);
}
