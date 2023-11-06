#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees dog instance
 * Return: nothing
 * @d: the instance of dog to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
