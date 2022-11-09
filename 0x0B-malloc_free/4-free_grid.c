#include "main.h"
#include <stdlib.h>
/**
  *free_grid - free a two dimensional grid
  *@grid: - The first argument
  *@height: - The second argument
  *Return: - free memmory
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
