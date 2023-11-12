#include<stdlib.h>
#include<stdio.h>
#include "main.h"
/**
*alloc_grid - return a 2 dimensional array.
*
*@width: width array.
*@height: height array.
*
*Return: 2 dimensional Array grid.
*/
int **alloc_grid(int width, int height)
{
int i = 0, j = 0;
int **grid;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
while (i < height)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
while (--i >= 0)
{
free(grid[i]);
}
free(grid);
return (NULL);
}
i++;
}
while (j < height)
{
i = 0;
while (i < width)
{
grid[j][i] = 0;
i++;
}
j++;
}
return (grid);
}
