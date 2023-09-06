#include "main.h"

/**
 * free_grid - main
 * @grid: input
 * @height: input1
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int x = 0;

	for (; x < height; x++)
		free(grid[x]);
	free(grid);
}
