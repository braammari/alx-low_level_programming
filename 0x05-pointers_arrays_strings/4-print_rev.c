#include "main.h"

/**
 * print_rev - gives the lenght of a string
 *@s: is charachter as a  parameter
 * Return: always 0.
 */

void print_rev(char *s)
{
int i = 0, j;
while (s[i] != '\0')
{
i++;
}
for (j = i - 1 ; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
