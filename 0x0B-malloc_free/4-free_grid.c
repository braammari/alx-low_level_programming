#include "main.h"

/**
* free_grid -  Entrypoint
* Description: 'the program's description free_grid
* @grid : 1 argument
* @height: 2 argument
*  Return: Always 0 (Success)
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
