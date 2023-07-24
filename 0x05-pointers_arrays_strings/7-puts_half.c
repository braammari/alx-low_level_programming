#include "main.h"

/**
 * puts_half - gives the lenght of a string
 *@str: is charachter as a  parameter
 * Return: always 0.
 */

void puts_half(char *str)
{
int n = 0, i;

while (str[n] != '\0')
{
n++;
}
if (n % 2 == 0)
{
	for (i = n / 2; i < n ; i++)
	{
		_putchar(str[i]);
	}
}
else
{
	for (i = (n + 1) / 2; i < n; i++)
	{

		_putchar(str[i]);
	}
}
_putchar('\n');
}
