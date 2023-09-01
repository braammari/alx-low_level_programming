#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
* set_bit -  Function do things
* @n: 1 param
* @index: 2 param
* Return: i (Success)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	 unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n = *n | mask;
	return (1);
}
