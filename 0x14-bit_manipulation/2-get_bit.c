#include <stdlib.h>
#include <stdarg.h>
#include "main.h"


/**
* get_bit -  Function do things
* @n: 1 param
* @index: 2 param
* Return: i (Success)
*/


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	return ((n & mask) != 0);
}
