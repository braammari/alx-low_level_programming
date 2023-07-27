#include "main.h"

/**
 * reverse_array -copy a string
 * @a: is an array
 * @n: is an intger
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int *s, i, j;

s = a;

for (i = 0, j = n - 1; i < j ; i++, j--)
{
	int t = a[j];

	a[j] = s[i];
	s[i] = t;
}
}

