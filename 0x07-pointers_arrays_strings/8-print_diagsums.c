#include "main.h"
/**
 * print_diagsums - copy a string
 * @a: is an array
 * @size: is an integer
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
		s2 = s2 + a[(i + 1) * size - i - 1];
	}
printf("%d, %d\n", s1, s2);
}
