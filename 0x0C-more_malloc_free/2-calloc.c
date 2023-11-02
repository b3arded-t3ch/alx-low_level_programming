#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * Return: a pointer to the allocated memory.
 * @nmemb: number of elements in the array
 * @size: size of each element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
