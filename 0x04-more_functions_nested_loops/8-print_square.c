#include "main.h"

/**
 * print_square - prints _ n times.
 * Return: Alays 0.
 * @size: is an integer
 **/
void print_square(int size)
{
int i, j;
for (i = 0; i < size ; i++)
{
	for (j = 0; j < size; j++)
	{
		_putchar(35);
	}
	_putchar('\n');
}
_putchar('\n');
}
