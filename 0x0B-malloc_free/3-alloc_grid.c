#include "main.h"
/**
* alloc_grid -  Entrypoint
* Description: 'the program's description _strdup
* @width : 1 param
* @height: 2 param
*  Return: Always 0 (Success)
*/
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **T;

	if (width <= 0 || height <= 0)
		return (NULL);
	T = (int **)malloc(height * sizeof(int *));
	if (T)
	{
		for (i = 0; i < height; i++)
		{
			T[i] = (int *)malloc(width * sizeof(int));
			if (T[i] == NULL && i != 0)
			{
				while (i >= 0)
					free(T[i--]);
				free(T);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
				T[i][j] = 0;
	}
	return (T);
}
