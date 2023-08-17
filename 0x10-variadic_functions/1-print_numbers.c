#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers -  Function do things
* @n : 1 param
* @...:  params
* @separator: separator
*  Return: s (Success)
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p);
}
