#include <stdlib.h>
#include <time.h>
#include "function_pointers.h"

/**
* print_name -  Function do things
* @name : 1 param
* @f: 2 param pointer to function
*  Return: Always 0 (Success)
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	
	f(name);
}
