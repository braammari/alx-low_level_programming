#include "main.h"

/**
 * _print_rev_recursion - print string
 * @s: is an array
 * Return: s
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		putchar(*s);
	}
}
