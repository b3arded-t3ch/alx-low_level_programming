#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocates memory to 2D array
 * Return: a pointer to the array
 * @width: size of column
 * @height: size of row
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;

	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0; j >= 0; j--)
		{
			free(array[j]);
		}
		free(array);
		return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			array[k][l] = 0;
		}
	}
	return (array);
}
