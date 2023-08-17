#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all -  Function do things
* @n : 1 param
* @...:  params
*  Return: s (Success)
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	float s = 0;
	va_list p;

	if (n == 0)
		return (0);
	va_start(p, n);
	for (i = 0; i < n; i++)
		s = s + va_arg(p, int);
	va_end(p);
	return (s);
}
