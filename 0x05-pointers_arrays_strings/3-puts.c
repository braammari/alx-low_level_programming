#include "main.h"

/**
 * _puts - gives the lenght of a string
 *@str: is charachter as a  parameter
 * Return: always 0.
 */

void _puts(char *str)
{
int i = 0;
while (*str != '\0')
{
i++;
str++;
_putchar(*str);
}
_putchar('\n');
}
