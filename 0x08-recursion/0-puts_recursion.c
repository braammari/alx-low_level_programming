#include "main.h"

/**
 * _puts_recursion - print string
 * @s: is an array
 * Return: s
 */

void _puts_recursion(char *s)
{
	char *str;

	str = s;
	if (*str != '\0')
	{
		_putchar(*str);
		str++;
		_puts_recursion(str);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
