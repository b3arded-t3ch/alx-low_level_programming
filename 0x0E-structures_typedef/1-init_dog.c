#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialise an instance of struct dog
 * Return: nothing
 *
 * @d: pointer to the new instance
 * @name: dog's name
 * @age: dog's age
 * @owner: dog instance owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return;
	}
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	};
}
