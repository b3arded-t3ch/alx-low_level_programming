#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory
 * block using malloc and free
 * Return: a pointer to the new pointer
 * @ptr: the previous pointer
 * @old_size: previous pointer's size
 * @new_size: new pointer's size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *np;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		np = malloc(new_size);
		if (np == NULL)
		{
			return (NULL);
		}
		return (np);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	np = malloc(new_size);
	if (np == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		np[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (np);
}
