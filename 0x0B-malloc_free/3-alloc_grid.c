#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 *
 * @width: - width of the grid
 * @height: - height of the grid
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
int **s, r, c;

if (width <= 0 || height <= 0)
{
return (NULL);
}

s = malloc(sizeof(int *) * height);
if (s == NULL)
{
return (NULL);
}

for (r = 0; r < height; r++)
{
s[r] = malloc(sizeof(int) * width);

if (s[r] == NULL)
{
for (; r >= 0; r--)
{
free(s[r]);
}
free(s);
return (NULL);
}

for (c = 0; c <= width; c++)
{
s[r][c] = 0;
}
}
return (s);
}
