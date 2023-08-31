#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
* print_binary -  Function do things
* @n: a pointer of type list_t
* Return: (Success)
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
