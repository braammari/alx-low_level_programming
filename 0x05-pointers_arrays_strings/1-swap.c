#include "main.h"

/**
 * swap_int - swap two value
 *@a: the first parameter
 *@b: the second parameter
 * Return: Always 0.
 */


void swap_int(int *a, int *b)
{
int h;
h = *a;
*a = *b;
*b = h;
}
