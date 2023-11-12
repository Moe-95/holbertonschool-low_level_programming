#include<stdlib.h>
#include<stdio.h>
#include "main.h"
/**
*free_grid - Free an array.
*
*@grid: Array to free.
*@height: size of an array.
*
*/
void free_grid(int **grid, int height)
{
int i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
