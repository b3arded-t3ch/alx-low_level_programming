#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars,
 * and initializes it with a specific char
 * Return: a pointer to the created array
 * @size: number of elements in the array
 * @c: the character element in the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
