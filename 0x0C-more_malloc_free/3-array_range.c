#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * Return: pointer to the new array
 * @min: The minimum of the array
 * @max: The maximum element of the array
 */
int *array_range(int min, int max)
{
	int i, range_size;

	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	range_size = max - min + 1;

	arr = malloc(sizeof(int) * range_size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < range_size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
