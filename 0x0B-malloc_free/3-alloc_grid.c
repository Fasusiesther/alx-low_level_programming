#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - a function that returns a pointer to
 *              a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on faliure
*/

int **alloc_grid(int width, int height)
{
	int **grid, Esther, Tope;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (Esther = 0; Esther < height; Esther++)
	{
		grid[Esther] = malloc(width * sizeof(int));
		if (grid[Esther] == NULL)
		{
			while (Esther >= 0)
			{
				free(grid[Esther]);
				Esther--;
			}
			free(grid);
			return (NULL);
		}
		for (Tope = 0; Tope < width; Tope++)
			grid[Esther][Tope] = 0;
	}
	return (grid);
}
