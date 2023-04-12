#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{

int **grid;

if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(height * sizeof(int));
if (grid == NULL)
{
return (NULL);
}
for (int i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (int j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
for (int j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
