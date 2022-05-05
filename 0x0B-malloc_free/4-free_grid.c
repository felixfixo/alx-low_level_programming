#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *  Note that we will compile with your alloc_grid.c file. Make sure it compiles.
 *
 * @grid: pointer to 2D arrays
 * @height: array
 * Return: void
 */
void free_grid(int **grid, int height)
{
height--;

while (height >= 0)
{
free(*(grid + height));
height--;
}
free(grid);
}
