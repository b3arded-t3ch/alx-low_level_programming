#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * Return: void
 * @b: the size of the memory to allocate
 */
void *malloc_checked(unsigned int b)
{
	char *arr;

	arr = malloc(b);
	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
