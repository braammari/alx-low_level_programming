#include "main.h"
/**
 * *array_range - prints buffer in hexa
 * @min: integer
 * @max: integer
 *
 * Return: array.
 */

int *array_range(int min, int max)
{
	int *tab, i, j;

	if (min > max)
	{
		return (NULL);
	}
	tab = (int *)malloc(sizeof(int) * (max - min + 1));
	if (tab == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; i < max + 1; j++, i++)
	{
		tab[j] = i;
	}
	return (tab);
}
