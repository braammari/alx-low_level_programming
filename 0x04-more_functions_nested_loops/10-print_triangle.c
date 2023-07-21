#include "main.h"

/**
 * print_triangle - prints _ n times.
 * Return: Alays 0.
 * @size: is an integer
 **/

void print_triangle(int size)
{
int i, j, k;
for (i = 0; i < size ; i++)
{
	for (j = size ; j > i ; j--)
	{
		_putchar(32);

	}
	for (k = 0; k <= i ; k++)
	{
		_putchar(35);
	}
	if (i != size - 1)
	{
		_putchar('\n');
	}
}
_putchar('\n');
}
