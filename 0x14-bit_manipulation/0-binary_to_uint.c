#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
* binary_to_uint -  Function do things
* @b: a pointer of type list_t
* Return: int (Success)
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	int n = 0;
	int dic = 0, pow = 1;

	if (b == NULL)
		return (0);
	while (b[n] != '\0')
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
		n++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			dic = dic + pow;
		pow = pow * 2;
	}
	return (dic);
}
