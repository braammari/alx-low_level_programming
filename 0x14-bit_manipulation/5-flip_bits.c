#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
* flip_bits -  Function do things
* @n: 1 param
* @m: 2 param
* Return: i (Success)
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var = n ^ m;
	unsigned int cal = 0;

	while (var > 0)
	{
		if (var & 1)
		{
			cal++;
		}
		var >>= 1;
	}
	return (cal);
}

