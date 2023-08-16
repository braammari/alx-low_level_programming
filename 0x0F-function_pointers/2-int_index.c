#include <stdlib.h>
#include <time.h>
#include "function_pointers.h"

/**
* int_index -  Function do things
* @array : 1 param
* @cmp:  param pointer to function
* @size: 3 param
*  Return: Always 0 (Success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		int i = 0;

		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
return (-1);
}
