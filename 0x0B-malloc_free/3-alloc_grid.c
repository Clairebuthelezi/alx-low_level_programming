#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *) + height * width * sizeof(int));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		grid[i] = (int *)(grid + height) + i * width;

	return (grid);
}

