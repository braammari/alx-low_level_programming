#include "main.h"

/**
 * puts2 - gives the lenght of a string
 *@str: is charachter as a  parameter
 * Return: always 0.
 */


void puts2(char *str)
{
int n = 0, i;

while (str[n] != '\0')
{
n++;
}
for (i = 0; i < n ; i = i + 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
