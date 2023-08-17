#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings -  Function do things
* @n : 1 param
* @...:  params
* @separator: separator
*  Return: s (Success)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(p, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}

