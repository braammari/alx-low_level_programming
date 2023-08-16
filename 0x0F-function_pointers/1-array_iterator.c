#include <stdlib.h>
#include <time.h>
#include "function_pointers.h"

/**
* array_iterator -  Function do things
* @array : 1 param
* @action:  param pointer to function
* @size: 3 param
*  Return: Always 0 (Success)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
