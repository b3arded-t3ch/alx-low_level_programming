#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new instance of dog
 * Return: pointer to the new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: who owns dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdg;

	newdg = malloc(sizeof(dog_t));
	if (newdg == NULL)
	{
		return (NULL);
	}
	newdg->name = strdup(name);
	if (newdg->name == NULL)
	{
		return (NULL);
	}
	newdg->age = age;
	newdg->owner = strdup(owner);
	if (newdg->owner == NULL)
	{
		free(newdg->name);
		free(newdg);
		return (NULL);
	}
	return (newdg);
}
